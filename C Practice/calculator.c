//WAP to perform a calculation as per user's choice
#include<stdio.h>
int main(void)
{
	int a,b;	//input-> Buffer memory -> REal Memory
	char opr;
	printf("\n Calculator \n");
	printf("\nEnter two numbers: ");
	scanf("%d%d",&a,&b);	//INput -> Enter ASCII 10
	printf("Enter an arithmetic operator: ");
	fflush(stdin);
	scanf("%c",&opr);//*
	switch(opr)
	{
		case '+':
			printf("%d + %d = %d\n",a,b,a+b);
			break;
		case '-':
			printf("%d - %d = %d\n",a,b,a-b);
			break;
		case '/':
			printf("%d / %d = %d\n",a,b,a/b);
			break;
		case '*':
			printf("%d * %d = %d\n",a,b,a*b);
			break;
		case '%':
			printf("%d %% %d = %d\n",a,b,a%b);
			break;
		default:
			printf(":( Invalid Operator\n");
	}
	return 0;
}