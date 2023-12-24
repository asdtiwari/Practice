/*print pattern
*
**
****
*******
***********
***************	*/
#include<stdio.h>
void main()
{
	int a,s,d,f=1,g=1;
	printf("Enter the number of Rows");
	scanf("%d",&d);
	for(a=1;a<=d;a++)
	{
		f=g;
		for(s=1;s<=f+(a-1);s++)
		{
			g=s;
			printf("*");
		}
		printf("\n");
	}
}