/*Print Pattern
Note: Try to print asterisk in place of space
n=5	123456789	outer=row=2*n-1 inner=column=2*n-1 i=row j=column
1	********* 	n+1-i	n-1+i
2	**** ****	
3	***   *** 	
4	**     **
5	*       *	n+1-i	n-1+i
6	**     **	<i-n+1	<3*n-1-i
7	***   ***
8	**** ****
9	*********		*/
//-------------------------------
#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("\n Print Pattern \n");
	printf("\nEnter the size: ");			//*****
	scanf("%d",&n);	//n=3				//** 
	for(i=1;i<=2*n-1;i++)	//(i=2;<=5;+1)
	{
		for(j=1;j<=2*n-1;j++) //(j=4;<=5;+1)
		{
			if(i<=n)	//("2" i<=3)
			{
				if(j<=n+1-i || j>=n-1+i) //(""j <=4-i "2" or "4" j>=2+i "4")
					printf("*");
				else
					printf(" ");
			}
			else	//(i>3)
			{
				if(j<=i-n+1 || j>=3*n-1-i) //(j<=i-2 or j>=8-i)
					printf("*");
				else
					printf(" ");
			}
		}
		
	}
	return 0;
}