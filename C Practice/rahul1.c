/*String.h*/
#include<stdio.h>
#include<string.h>
int findMinimumCharacters(char *searchWord,char *resultWord)
{
	int flag,i,j,n=strlen(resultWord);
	for(i=0;*(resultWord+i)!='\0';i++)
	{
		flag=0;
		for(j=0;j<*(searchWord+j)!='\0';j++)
		{
			if(*(resultWord+i)==*(searchWord+j))
			{
				flag=1;
				n--;
				break;
			}
		}
		if(flag==0)			
			break;
	}
	return n;
}
int main(void)
{
	int a;
	a=findMinimumCharacters("abcz","azdb");
	printf("%d",a);
	return 0;
}