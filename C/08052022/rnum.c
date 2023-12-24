/*WAP to extract number from FILE*/
#include<stdio.h>
void main()
{
	FILE *p;
	p=fopen("num.txt","r");
	int i;
	printf("Enterd Prime number is\n");
	do
	{
		i=getw(p);
		if(i!=-101)
		{
			printf("%d ",i);
		}
	}while(i!=-101);
	fclose(p);
}