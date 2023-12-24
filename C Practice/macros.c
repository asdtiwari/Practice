/*Write macro definition for the following:
1. To find arithmetic mean of two numbers.
2. To find absolute value of a number.
3. To convert an uppercase alphabet into lowercase.
4. To obtain the biggest of three numbers.*/
/*Author: ASDT Date: Janurary 15, 2023*/
//--------------------------------------
#include<stdio.h>
#define mean(a,b) ((a+b)/2.0)
#define absolute(a) (a>0?a:-a)
#define upper(a) (a+32)
#define biggest(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
//--------------------------------------
int main(void)
{
	auto int a,b,c;
	auto char ch;
	printf("\nMacros Expansion\n");
	printf("\nEnter a uppercase alphabet: ");
	scanf("%c",&ch);
	printf("Upppercase : %c \n",upper(ch));
	printf("\nEnter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Arithmetic Mean : %.2f \n",mean(a,b));
	printf("\nEnter a number: ");
	scanf("%d",&a);
	printf("Absolute value: %d \n",absolute(a));
	printf("\nEnter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Biggest No.: %d \n",biggest(a,b,c));
	return 0;
}
//--------------------------------------