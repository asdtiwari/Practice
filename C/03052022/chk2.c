/*Program to short string lengthwise*/
#include<stdio.h>
void main()
{
	char a[5][20],t[20];
	int i,j,k,l,m,q,c[5];
	printf("Enter five strings\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=0;
		for(j=0;a[i][j]!='\0';j++)
		{
			c[i]++;
		}
	}
	for(i=0;i<5;i++)	
	{
		for(j=0;j<4;j++)
		{
			if(c[j]>c[j+1])
			{
				q=c[j];
				c[j]=c[j+1];
				c[j+1]=q;
				for(k=0;k<20;k++)
				{
					t[k]=a[j][k];
					a[j][k]=a[j+1][k];
					a[j+1][k]=t[k];
				}				
			}
		}
	}
	printf("Shorted Data\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",a[i]);
	}
}