/*Program to read multiple data from file*/
#include<stdio.h>
void main()
{
	FILE *p;
	p=fopen("stu.txt","r");
	int i,r,m;
	char n[10];
	printf("Data from file\n");
	for(i=1;i<=5;i++)
	{
		fscanf(p,"%d%s%d",&r,&n,&m);
		printf("%d\t%s\t%d\n",r,n,m);
	}
	fclose(p);
}