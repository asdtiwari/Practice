/*WAP to swap two numbers*/
#include<stdio.h>
int main(void)
{
	int a,b,temp;
	printf("\n Swapping \n");
	printf("\nGive value of a and b: ");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n After Swapping \n a : %d \n b : %d",a,b);
	return 0;
}
