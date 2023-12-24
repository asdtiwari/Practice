/*WAP to find average marks obtained by a class of 30 students in a test*/
/*Author: ASDT Date: January 16, 2023*/
//------------------------------------
#include<stdio.h>
//------------------------------------
int main(void)
{
	auto int arr[30],sum=0;
	register short i;
	printf("\nAverage Marks \n");
	for(i=0;i<30;i++)
	{
		printf("Enter Mark of Student %d: ",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Average Mark is %.2f \n",sum/30.0);
	return 0;
}
//------------------------------------