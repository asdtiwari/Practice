//print English Uppercase Alphabet
#include<stdio.h>
void main()
{
	char a;
	int i;
	for (a='A';a<='Z';)
	{
		for(i=1;i<=4;i++)
		{
			if(a>='A'&&a<='Z')
			{
				printf("%c\t",a);
			}
			a++;
		}
		printf("\n");
	}
}