#include<stdio.h>
void main()
{
	int a;
	char c;
	printf("\nEnter a integer: ");
	scanf("%d",&a);
	printf("\nEnter a character: ");
	while(getchar()!='\n')
	;
	scanf("%s",&c);
	printf("\nEntered integer is %d \n",a);
	printf("\nEntered character is %c \n",c);
}