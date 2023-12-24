/*WAP where if input raj is very smart boy
then output should be jar si yrev trams yob*/
#include<stdio.h>
void main()
{
	char a[100],b[100],c[20],r[20];
	int i=0,j,k,l=0;
	printf("Enter a paragraph or sentence\n");
	gets(a);
	do
	{
		j=0;
		do
		{
			if(a[i]!=32)
			{
				c[j]=a[i];
				j++;
			}
			i++;
		}while(a[i]!=32);
		c[j]='\0';
		puts(c);
		j--;
		for(k=0;k<20;k++)
		{
			r[k]=c[j];
			j--;
		}
		puts(r);
		k=0;
		do
		{
			b[l]=r[k];
			l++;
			k++;
		}while(r[k]!='\0');
	}while(a[i]!='\0');
	b[l]='\0';
	puts(b);
}