//WAP to find middle among three
#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("\n Middle No. \n");
	printf("\nEnter three different No.: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a!=b && b!=c && a!=c)//thrice no is different
	{
		if((a>b && a<c) || (a<b && a>c))
			printf("\n%d is middle one\n",a);
		else if((b>c && b<a) || (b<c && b>a))
			printf("\n%d is middle one\n",b);
		else
			printf("\n%d is middle one\n",c);
	}
	else
		printf("\nGiven numbers are not different from each other\n");
	return 0;
}