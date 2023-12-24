//WAP to Calculate five numbers
#include<stdio.h>
int main()
{
	int a, b, c, d, e, sum;
	printf("\n Sum \n");
	printf("\n give five no: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	sum = a + b + c + d + e;
	printf("\n %d + %d + %d + %d + %d = %d", a, b, c, d, e, sum);
	return 0;
}