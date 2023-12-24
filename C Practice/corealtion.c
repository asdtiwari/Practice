/*For the following set of n data points (x,y), WAP to compute the correlation coefficient r, given by
r = (Σxy-ΣxΣy)/(√[nΣx²-(Σx)²][nΣy²-(Σy)²])
x                y
34.22        102.43
39.87        100.93
41.85        97.43
43.23        97.81
40.06       98.32
53.29        98.32
53.29        100.07
54.14         97.08
49.12         91.59
40.71         94.85
55.15         94.65*/
/*Author: ASDT Date: January 20, 2023*/
//------------------------------------
#include<stdio.h>
#include<math.h>
//------------------------------------
int main(void)
{
	float x[]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
	float y[]= {102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65};
	register short i,size=sizeof(x)/sizeof(float),n=size;
	float r,sumx=0,sumy=0,sumxy=0,sqx=0,sqy=0;
	for(i=0;i<size;i++)
	{
		sumx+=x[i];
		sumy+=y[i];
		sumxy+=(x[i]*y[i]);
		sqx+=(pow(x[i],2));
		sqy+=(pow(y[i],2));
	}
	r=(n*sumxy-sumx*sumy)/(sqrt(((n*sqx-pow(sumx,2))*(n*sqy-pow(sumy,2)))));
	printf("\nx\ty\n");
	for(i=0;i<size;i++)
		printf("\n%.2f\t%.2f",x[i],y[i]);
	printf("\nCorelation Coefficient of given data is: %f",r);
	return 0;
}
//------------------------------------