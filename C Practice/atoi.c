/*WAP that converts a string like "124" to an integer 124*/
/*Author: ASDT Date: January 24, 2023*/
//------------------------------------
#include<stdio.h>
#include<stdlib.h>
//------------------------------------
long long int convert(char *ptr)
{
	auto long long out=0;
	register short i;
	for(i=0;*(ptr+i)!='\0';i++)
	{
		if(*(ptr+i)<48 || *(ptr+i)>57)
		{
			printf("\n ! Invalid number you've inserted in string ! \n");
			exit(0);
		}
		else
			out=out*10+(*(ptr+i)-48);
	}
	return out;
}
//------------------------------------
int main()
{
	char in[20];
	printf("\nATOI PROGRAM \n");
	printf("\nEnter a number: ");
	scanf("%s",in);
	printf("\n %lld \n",convert(in));
	return 0;
}
//------------------------------------