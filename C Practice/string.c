/*WAP to create own function of strlen(), strcpy(), strcat(), strcmp()*/
/*Author: ASDT Date: January 24, 2023*/
//------------------------------------
#include<stdio.h>
//------------------------------------
int len(char *str)
{
	register short count,i;
	for(i=0,count=0;*(str+i)!='\0';i++,count++)
	;
	return count;
}
//------------------------------------
void cpy(char *dest, char *source)
{
	register short i;
	for(i=0;*(source+i)!='\0';i++)
		*(dest+i)=*(source+i);
	*(dest+i)='\0';
	return;
}
//------------------------------------
void cat(char *dest, char *source)
{
	register short i,j;
	if(((sizeof(dest)/sizeof(char))-len(dest))==len(source))
		printf("\n ! Not sufficient space in destination for catanation ! \n");

	else
	{
		for(i=len(dest),j=0;*(source+j)!='\0';i++,j++)
			*(dest+i)=*(source+j);
		*(dest+i)='\0';
	}
	return;
}
//------------------------------------
int cmp(char *str1,char *str2)
{
	register short i,cmp;
	for(i=0;*(str1+i)!='\0'||*(str2+i)!='\0';i++)
	{
		cmp=*(str1+i)-*(str2+i);
		if(cmp!=0)
			return 0;
	}
	return 1;
}
//------------------------------------
int main(void)
{
	char str1[50],str2[50];
	printf("\nString Function\n");
	printf("\nEnter string1: ");
	gets(str1);
	printf("Enter string2: ");
	gets(str2);
	printf("\nOutput: \n %s \n %s \n",str1,str2);
	printf("\n Length is String1: %d \n Length of String2: %d \n",len(str1), len(str2));
	if(cmp(str1,str2)==1)
		printf("\n Both Strings are same\n");
	else
		printf("\n Both Strings are different\n");
	cpy(str1,"Akhilesh");
	printf("\n After copying String1: %s",str1);
	cat(str1," Tiwari");
	printf("\n After catanation String1: %s \n",str1);
	return 0;
}
//------------------------------------