/*Count vowels Duplicate count once like name rajkumarji total vowels 4 but it must be 3*/
#include<stdio.h>
void main()
{
	char a[20], v[]="aeiou",t;
	int i,j,k=4,c=0;
	printf("Enter a string\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;v[j]!='\0';j++)
		{
			if(a[i]==v[j])
			{
				t=v[j];
				v[j]=v[k];
				v[k]-=v[k];
				c++;
				k--;
			}
		}
	}
	printf("%d vowels",c);
}