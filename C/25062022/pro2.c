/*Program 2*/
#include<stdio.h>
int calc(int x,int *py,int **ppz)
{
	int y,z;
	**ppz+=1;
	z=**ppz;
	*py+=**ppz;
	y=*py;
	x+=*py;
	return x+y+z;
}
void main()
{
	int c,*b,**a;
	c=7;
	b=&c;
	a=&b;
	printf("%d",calc(c,b,a));
}