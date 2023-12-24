//WAP to check what is taken as input in character
#include<stdio.h>
int main(void)
{
	char inp;
	printf("\n Character Identifier \n");
	printf("\nEnter a character: ");
	scanf("%c",&inp);
	if(inp>='A' && inp<='Z')	//65-90
		printf("\n %c is an Uppercase Alphabet\n",inp);
	else if(inp>='a' && inp<='z')	//97-122
		printf("\n %c is a Lowercase Alphabet\n",inp);
	else if(inp>='0' && inp<='9')	//48-57
		printf("\n %c is a digit\n",inp);
	else	//-128 to +127	' '==32 '\n'==10
		printf("\n %c is a symbol\n",inp);
	return 0;
}