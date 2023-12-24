/*How will you Initialise a 3D array threed[3][2][3]? How will you refer the first and last element in this array?*/
/*Author: ASDT Date: January 23, 2023*/
//------------------------------------
#include<stdio.h>
//------------------------------------
int main(void)
{
	register short i,j,k;
	int threed[3][2][3]={{{1,2,3},{4,5,6}},{{7,8,9},{9,10,11}},{{12,13,14},{15,16,17}}};
	printf("\nThreeD[3][2][3]: \n");
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			for(k=0;k<3;k++)
				printf(" %d ",threed[i][j][k]);
	printf("\n");
	return 0;
}
//------------------------------------