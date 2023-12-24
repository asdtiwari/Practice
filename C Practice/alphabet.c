//WAP to justify small or capital letter of alphabet
#include<stdio.h>
int main(void)
{
	char inp;
	printf("\n Case Finder \n");
	printf("\nGive an Alphabet: ");
	scanf("%c",&inp);
	if((inp>='A' && inp<='Z') || (inp>='a' && inp<='z'))
	{
		if(inp>=65 && inp<=90)	//C=68
			printf("%c is an Uppercase Alphabet\n",inp);
		else
			printf("%c is a lowercase Alphabet\n",inp);
	}
	else
		printf("%c is not an Alphabet\n",inp);
	return 0;
}