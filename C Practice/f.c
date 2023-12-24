//WAP to convert temp
#include<stdio.h>
int main(void)
{
	float cel,fere;
	printf("\n Temperature Convertor \n");
	printf("\nGive temp in celcius: ");
	scanf("%f",&cel);
	fere=((cel*9)/5)+32;
	printf("\n %.3f degree fehrenhiet\n",fere);
	return 0;
}