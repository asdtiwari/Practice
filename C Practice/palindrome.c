//WAP to find whether the given input is palindrome or not
#include<stdio.h>
int main(void)
{
	int input;	//(12321/1000)%10=2
	printf("\n Palindrome Number \n");
	printf("\n Enter a Number of five digit: ");
	scanf("%d",&input);
	if(input<10000 || input>99999)	//12341
		printf("\n %d is not a five digit number\n Can't Say Palindrome\n",input);
	else
	{
		if((input%10)==(input/10000) && ((input%100)/10)==((input/1000)%10))
			printf("\n %d is a Palindrome No.\n",input);
		else
			printf("%d isn't a Palindrome No. \n",input);
	}	
	return 0;
}