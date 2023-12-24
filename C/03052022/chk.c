/*Program to short string alphabetically in ascending order*/
#include<stdio.h>
void main()
{
	char a[5][20], t[20];		//Declaration of characters
	int i,j,k,b,l;			//Declaration of integers
	printf("Enter two string ");	//Message
	for(i=0;i<5;i++)		//Input
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<5;i++)		//Bubble Shorting
	{
		for(j=0;j<4;j++)
		{
			b=0,l=0;	//Initialization for do while loop;
			do		//strcmp string comparison
			{
				b=a[j][l]-a[j+1][l];
				l++;
			}while(b==0);
			if(b>0)		//Condition checking
			{
				for(k=0;k<20;k++)	//Copying or swapping
				{
					t[k]=a[j][k];
					a[j][k]=a[j+1][k];
					a[j+1][k]=t[k];
				}
			}
		}
	}
	printf("Shorted Data\n");	//Message
	for(i=0;i<5;i++)		//Output
	{
		printf("%s\n",a[i]);
	}
}