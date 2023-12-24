/*WAP to store the data of students in file*/
#include<stdio.h>
void main()
{
	FILE *p;
	p=fopen("stu.txt","w");
	int i,r,m;
	char n[10];
	printf("Enter Roll No, Name and Marks of 5 Student\n");
	fprintf(p,"%s","Roll No\tName\tMarks\n");
	for(i=1;i<=5;i++)
	{
		scanf("%d%s%d",&r,n,&m);
		fprintf(p,"%d\t%s\t%d\n",r,n,m);
	}
	printf("File Sucessfully Created");
	fclose(p);
}