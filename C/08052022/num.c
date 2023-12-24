/*WAP to store numbers in FILE*/
#include<stdio.h>
void main()
{
	FILE *p;
	p=fopen("num.txt","w");
	int i;
	printf("Enter the prime numbers\npress -101 to complete it\n");
	do
	{
		scanf("%d",&i);
		putw(i,p);
	}while(i!=-101);
	printf("File Successfully created");
	fclose(p);
}