//WAP to print alphabet
#include<stdio.h>
int main(void)
{
	int i;
	char loop;
	printf("\n Alphabet \n");
	for(loop=65,i=1;loop<=90;loop++,i++)
	{
		printf(" %c ",loop);
		if(i==4)
		{
			printf("\n");
			i=0;
		}
	}
	return 0;
}