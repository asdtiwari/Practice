/*Program1*/
#include<stdio.h>
int fun(int n)
{
	if(n!=0){
		return n-fun(n-5);
	}
	else{
		return n;
	}
}
int main()
{
	int n=20,z;
	z=fun(n);
	printf("%d",z);
	return 0;
}