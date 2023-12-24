//Menu based different operation program
#include<stdio.h>
void main()
{
	int c,a,b,s;
	do
	{
		printf("\nEnter your choice\n1 for sum\n2 for subtract\n3 for multiplication\n4 for divide\n5 for exit");
		scanf("%d",&c);
		printf("Enter the value of a and b ");
		scanf("%d%d",&a,&b);
		switch(c)
		{
			case 1:
				{
					s=a+b;
					printf("Sum is %d",s);
					break;
				}
			case 2:
				{
					s=a-b;
					printf("Subtract is %d",s);
					break;
				}
			case 3:
				{
					s=a*b;
					printf("Multiplication is %d",s);
					break;
				}
			case 4:
				{
					s=a/b;
					printf("Divide is %d",s);
					break;
				}
			case 5:
				{
					printf("Thanks to use the program");
					break;
				}
			default:
				{
					printf("Invalid Input");
					break;
				}
		}
	}while(c!=5);
}