//WAP to print the word of given number upto 10
#include<stdio.h>
int main(void)
{
	int num;
	printf("\n Number to Word 0-10 \n");
	printf("\nEnter a number: ");
	scanf("%d",&num);
	switch(num)
	{
		case 0:printf("\n Zero \n");
			break;
		case 1:
			printf("\n One \n");
			break;
		case 2:
			printf("\n Two \n");
			break;
		case 3:
			printf("\n Three \n");
			break;
		case 4:
			printf("\n Four \n");
			break;
		case 5:
			printf("\n Five \n");
			break;
		case 6:
			printf("\n Six \n");
			break;
		case 7:
			printf("\n Seven \n");
			break;
		case 8:
			printf("\n Eight \n");
			break;
		case 9:
			printf("\n Nine \n");
			break;
		case 10:
			printf("\n Ten \n");
			break;
		default:
			printf("\n :( Out of Range \n");
	}
	return 0;
}