/*WAP that stores a set of names of individuals and abbreviates the first and middle name to their first letter.*/
/*Author: ASDT Date: January 29, 2023*/
//------------------------------------
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//------------------------------------
void get(char *name[][3])
{
	char in[3][20];
	register short i,j;
	printf("\n*Enter Full Name [First Middle Last] \n*Put hypen(-) in case of no middle or last name \n");
	for(i=0;i<5;i++)
	{
		printf("Name %d : ",i+1);
		scanf("%s%s%s",in[0],in[1],in[2]);
		for(j=0;j<3;j++)
		{
			name[i][j]=(char *)malloc(strlen(in[j])*sizeof(char));
			strcpy(name[i][j],in[j]);
		}
	}
	printf("\n Data Stored Successfully\n");
	return;
}
//------------------------------------
void put(char *name[][3])
{
	register short i,j;
	printf("\nOutput\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
			if(name[i][j][0]!='-')
				printf("%c.",name[i][j][0]);
		if(name[i][j][0]!='-')
			printf(" %s",name[i][j]);
		printf("\n");
	}
	return;
}
//------------------------------------
int main(void)
{
	char *name[5][3];
	printf("\n|     Name Abbreviator     |\n");
	get(name);
	put(name);
	return 0;
}
//------------------------------------