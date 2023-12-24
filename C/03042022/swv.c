//swap the value of two variables without third variable
#include<stdio.h>
void main()
{
	float a,b;
	printf("Give value of a and b for swaping\n\t");
	scanf("%f%f",&a,&b);
	printf("Given value of a and b for swaping is %.2f and %.2f respectively",a,b);
	a+=b;
	b=a-b;
	a-=b;
	printf("\nAfter swaping value of a and b are %.2f and %.2f respectively",a,b);
}
	
	