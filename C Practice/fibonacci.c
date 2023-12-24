/*WAP that generates and prints the Fibonacci words of order 0 through 5. For example, f(0) = "A", f(1)= "B", f(2)= "BA", f(3) = "BAB", f(4)= "BABBA", etc*/
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
void cat(char *dest, char *source)
{
	register short i,j;
	for(i=len(dest),j=0;*(source+j)!='\0';i++,j++)
		*(dest+i)=*(source+j);
	*(dest+i)='\0';
	return;
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
int main(void)
{
	char a[20]="A",b[20]="B",c[20];
	register short i;
	printf("\n Fibonacci Series \n");
	printf("\n %s %s ",a,b);
	for(i=0;i<5;i++)
	{
		cpy(c,b);
		cat(c,a);
		printf("%s ",c);
		cpy(a,b);
		cpy(b,c);
	}
	return 0;
}
//------------------------------------