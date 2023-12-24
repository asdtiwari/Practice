/*For the following set of sample data, compute the standard deviation and the mean
-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
The formula for standard deviation is
(√(x1-x')2)/n
Where x1 is the data item and x' is the mean.*/
/*Author: ASDT Date: January 16, 2023*/
//------------------------------------
#include<stdio.h>
#include<math.h>
//------------------------------------
int main(void)
{
	short i,terms,arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
	float mean,sum,dev;
	terms=(sizeof(arr)/sizeof(short));
	for(i=0,sum=0;i<terms;i++)
		sum+=arr[i];
	mean=sum/terms;
	for(i=0,sum=0;i<terms;i++)
		sum+=pow((arr[i]-mean),2);
	dev=sqrt(sum/terms);
	printf("\nGiven Data is: \n");
	for(i=0;i<terms;i++)
		printf(" %d ",arr[i]);
	printf("\nMean: %.2f \nStandard Deviation %.2f \n",mean,dev);
	return 0;
}
//------------------------------------