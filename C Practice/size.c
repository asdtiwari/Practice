/*How many bytes in memory would be occupied by the following array of pointers to strings? How many bytes would be required to store the same strings in a two-dimensional character array?
char *mess[]={"Hammer and tongs","Tooth and nail","Spit and polish","You and C"};*/
/*Author: ASDT Date: January 26, 2023*/
//-------------------------------------
#include<stdio.h>
//-------------------------------------
int main(void)
{
	char *mess[]={"Hammer and tongs","Tooth and nail","Spit and polish","You and C"};
	char mess1[][16]={"Hammer and tongs","Tooth and nail","Spit and polish","You and C"};
	printf("\nSize of Array of pointers to strings: %d \nSize of two dimesntional character array: %d\n",sizeof(mess),sizeof(mess1));
	return 0;
}
//-------------------------------------