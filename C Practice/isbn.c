/*To uniquely identify a book a 10-digit ISBN (International Standard Book Number) is used. The rightmost digit in ISBN is a checksum digit. This digit is determined from the other 9 digits using the condition that d1+2d2+3d3+...+10d10 must be a multiple of 11 (where di denotes the ith digit from the right). the checksum digit d1 can be any value from 0 to 10: the ISBN convention is to use the value X to denote 10. WAP that receives a 10-digit integer, computes the checksum, and reports whether the ISBN number is correct or not.*/
/*Author: ASDT Date: January 26, 2023*/
//------------------------------------
#include<stdio.h>
#include<stdlib.h>
//------------------------------------
int isnum(char *ptr)
{
	if(*(ptr)<48 || *(ptr)>57)
		return 0;
	return 1;
}
//------------------------------------
void chkin(char *ptr)
{
	register short i;
	for(i=0;*(ptr+i)!='\0';i++)
		if(*(ptr+i+1)!='\0')
			if(!isnum(ptr+i))
			{
				printf("\n :( Except number nothing is allowed \n");
				exit(1);
			}
	if(i!=10)
	{
		printf("\n :( ISBN should be of 10 digits\n");
		exit(2);
	}
	if(!isnum(ptr+i-1) && *(ptr+i-1)!='X' && *(ptr+i-1)!='x')
	{
		printf("\n :( Sumdigit can be only x or any number \n");
		exit(3);
	}
	return;
}
//------------------------------------
int valid(char *ptr)
{
	register short i,j,num;
	register int sum;
	for(i=0,j=10,sum=0;*(ptr+i+1)!='\0';i++,j--)
	{
			num=*(ptr+i)-48;
			sum=sum+num*j;
	}
	num=*(ptr+i)=='x'?10:*(ptr+i)=='X'?10:*(ptr+i)-48;
	sum=sum+num*j;
	if(sum%11!=0)
		return 0;
	return 1;
}
//------------------------------------
int main(void)
{
	char isbn[11];
	printf("\n10 Digit ISBN \n");
	gets(isbn);
	chkin(isbn);
	if(valid(isbn))
		printf("\n :) Valid ISBN Number \n");
	else
		printf("\n :( Invalid ISBN Number \n");
	return 0;
}
//------------------------------------