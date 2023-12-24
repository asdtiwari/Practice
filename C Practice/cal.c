//WAP FOR CALCULATOR
#include<stdio.h>
int main(void)
{
	int a,b,opt;		
	char opertor;
	do
	{
		printf("\nCalculator\n");
		printf("\nGive two integers: ");
		scanf("%d%d",&a,&b);//2 3
		printf("Give arithmetic operator: ");
		while(getchar()!='\n')//  \n
		;
		scanf("%c",&opertor); //+
		switch(opertor)
		{
			case '+':
				printf("\n%d + %d = %d",a,b,a+b); // 2 + 3 = 5
				break;
			case '-':
				printf("\n%d - %d = %d",a,b,a-b);
				break;
			case '*':
				printf("\n%d * %d = %d",a,b,a*b);
				break;
			
			case '/':
				printf("\n%d / %d = %d",a,b,a/b);
				break;
			
			case '%':
				printf("\n%d %% %d = %d",a,b,a%b);
				break;
			default: //32 a 
				printf("\n:( Invalid Operator\n");
		}
		printf("\n1 for rerun\n2 for exit\t");
		scanf("%d",&opt);
	}while(opt!=2);
	printf("\nExit...\n");
	return 0;
}