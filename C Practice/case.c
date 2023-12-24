//WAP to change the case of given alphabet
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char inp;
	printf("\n Case Changer \n");
	printf("\nGive an Alphabet: ");
	scanf("%c",&inp);	//A=65 Z=90	a=97	z=122
	if((inp>='A' && inp<='Z') || (inp>='a' && inp<='z'))//Alphabet
	{
		if(inp>='A' && inp<='Z')	//Uppercase
			inp=inp+32; //A+32=a
		else
			inp=inp-32;	//a-32==97-32==65==A
	}
	else
	{
		printf("\n %c is not an alphabet",inp);
		exit(0);
	}
	printf("Output : %c",inp);
	return 0;
}