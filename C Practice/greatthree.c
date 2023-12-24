/*WAP to find the largest among three numbers*/
#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("\n Largest Finder \n");
	printf("\nHey User! Give three NO. : ");	
	scanf("%d%d%d",&a,&b,&c);	//5 5 3
	if(a>=b && a>=c)
		printf("%d is greatest\n",a);
	else if(b>a && b>c)	//5>5=0 && 5>3=1	FALSE	
		printf("%d is greatest\n",b);
	else
		printf("%d is greatest\n",c);
	return 0;
}