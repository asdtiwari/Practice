/*raj is a good boy
Output vowels 3	*/
#include<stdio.h>
void main()
{
	char a[100],v[]="aeiou",t;
	int i,j=0,k=4,c=0;
	printf("Enter a sentence or paragraph\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]+=32;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;v[j]!='\0';j++)
		{
			if(a[i]==v[j])
			{
				t=v[j];
				v[j]=v[k];
				v[k]=t;
				v[k]-=v[k];
				c++;
				k--;
			}
		}
	}
	printf("%d vowels",c);
}