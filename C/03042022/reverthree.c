//Reverse three digit number
#include<stdio.h>
void main()
{
	int i,r;
	printf("Enter a three digit number to reverse it\n\t");
	scanf("%d",&i);
	r=(i/100)+(((i/10)%10)*10)+((i%10)*100);
	printf("The reverse of three digit number %d is %d",i,r);
}