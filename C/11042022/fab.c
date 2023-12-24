//print fibonacci upto 10 succedding digits
#include<stdio.h>
void main()
{
	int h,i=0,j=1,k=1;
	printf("%d\t%d\t",i,j);
	while(k<=8)
	{
		h=i+j;
		printf("%d\t",h);
		i=j;
		j=h;
		k++;
	}
}