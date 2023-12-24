//WAP to upprise the lowercase character
#include<stdio.h>
int main(void)
{
	char inp;
	printf("\n Alphabet \n");
	printf("\nGive an alphabet: ");
	scanf("%c",&inp);
	inp=inp-32;
	printf("\nUppercase: %c \n",inp);
	return 0;
}