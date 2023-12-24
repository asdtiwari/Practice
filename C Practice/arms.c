//WAP to print armstrong number from 100 to 999
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,once,tens,hunds,sum;
	printf("\n Armstrong 100-999 \n");
	for(i=100;i<=999;i++)//153	153<=999
	{
		once=i%10;	//3
		tens=(i%100)/10;	//5
		hunds=i/100;	//1
		sum=pow(once,3)+pow(tens,3)+pow(hunds,3); //27+125+1=153
		if(sum==i)	//153==153
			printf(" %d ",i);
	}
	return 0;
}