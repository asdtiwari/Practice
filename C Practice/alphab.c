//WAP to check whether the given input is vowel or not
#include<stdio.h>
int main()
{
	char inp;
	printf("\n Alphabet \n");
	printf("\nEnter an Alphabet: ");
	scanf("%c",&inp);
	if(inp>='A' && inp<='Z' || inp>='a' && inp<='z')
	{
		if(inp=='a'||inp=='e'||inp=='i'||inp=='o'||inp=='u'||inp=='A'||inp=='E'||inp=='I'||inp=='O'||inp=='U')
			printf("\n%c is a vowel\n",inp);
		else
			printf("\n%c is a consonant\n",inp);
	}
	else
		printf("\n%c is not an Alphabet\n",inp);
	return 0;	
}