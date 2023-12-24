//input a number from user and check wheather it is palindrome or not
#include<stdio.h>
void main()
{
	int i,r;
	printf("Enter a three digit number to know wheather it is palindrome or not ");
	scanf("%d",&i);
	r=(i/100)+(((i/10)%10)*10)+((i%10)*100);
	if (i<100 || i>999)
	{
		printf("%d is not three digit number",i);
	}
	if (i>=100 && i<=999)
	{
		if (i==r)
		{
			printf("%d is palindrome",i);
		}
		if (i!=r)
		{
			printf("%d is not palindrome",i);
		}
	}
}
		