//WAP to lowerise the upper case Alphabet
#include<stdio.h>
int main(void)
{
	char inp,out;
	printf("\n Alphabet \n");
	printf("\nGive a upper case alphabet: ");
	scanf("%c",&inp);
	out=inp+32;
	printf("Output : %c",out);
	return 0;	
}