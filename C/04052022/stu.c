/*example of structure to create two object and enter the roll no, name, marks and percentage of students*/
#include<stdio.h>
struct class
{
	int rn;
	char n[10];
	int m;
	float p;
};
void main()
{
	struct class s1,s2;
	printf("Enter Roll no, Name, Marks\n");
	scanf("%d%s%d",&s1.rn,s1.n,&s1.m); 
	printf("Enter Roll no, Name, Marks\n");
	scanf("%d%s%d",&s2.rn,s2.n,&s2.m);
	s1.p=s1.m/5;
	s2.p=s2.m/5;
	printf("\nRoll no %d\nName %s\nMarks %d\nPercentage %.2f\n",s1.rn,s1.n,s1.m,s1.p);
	printf("\nRoll no %d\nName %s\nMarks %d\nPercentage %.2f\n",s2.rn,s2.n,s2.m,s2.p);
}