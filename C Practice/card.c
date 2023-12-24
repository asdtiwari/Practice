/*A credit Card number is usually a 16-digit number. A valid Credit Card number would satisfy a rule explained below with the help of a dummy Credit Card number --4567 1234 5678 9129. Start with the rightmost - 1 digit and multiply every other digit by 2.
4567 1234 5678 9129
8 12   2  6  10  14  18  4
Then subtract 9 from numbers that are larger than 10. Thus, we get:
8 3 2 6 1 5 9 4
Add them all up to get 38.
Add all the other digits (5,7,2,4,6,8,1,9) to get 42.
Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card number is valid.
WAP that receives a Credit Card number and checks using the above rule whether the Credit Card number is valid.*/
/*Author: ASDT Date: January 26, 2023*/
//-------------------------------------
#include<stdio.h>
#include<stdlib.h>
//-------------------------------------
void chkin(char *ptr)
{
	register short i;
	for(i=0;*(ptr+i)!='\0';i++)
	{
		if(*(ptr+i)<48||*(ptr+i)>57)
		{
			printf("\n! Card Number should be only numbers\n");
			exit(1);
		}
	}
	if(i!=16)
	{
		printf("\n! Card Number should be of 16 digits\n");
		exit(2);
	}
	return;
}
//-------------------------------------
int valid(char *ptr)
{
	register short i,num;
	register int sume,sumo,dbl;
	for(i=0,sume=0,sumo=0;*(ptr+i)!='\0';i++)
	{
		num=*(ptr+i)-48;
		if(i%2==0)
		{
			dbl=num*2;
			if(dbl>9)
				dbl-=9;
			sume+=dbl;
		}
		else
		{
			sumo+=num;
		}
	}
	if(((sume+sumo)%10)!=0)
		return 0;
	return 1;
}
//-------------------------------------
int main(void)
{
	char card[17];
	printf("\nCredit Card Validator \n");
	printf("\nEnter card number: ");
	scanf("%s",card);
	chkin(card);
	if(valid(card))
		printf("\n :) Valid Card \n");
	else
		printf("\n :( Invalid Card \n");
	return 0;
}
//-------------------------------------