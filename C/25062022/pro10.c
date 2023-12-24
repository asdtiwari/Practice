/*Program10*/
#include<stdio.h>
int Decode(char *pStr)
{
	int iRetVal=0;
	if(pStr)
	{
		while(*pStr &&*pStr<='9'&&*pStr>='0')
		{
		iRetVal=(iRetVal*10)+(*pStr-'0');
		pStr++;
		}
	}
	return iRetVal;
}
void main()
{
	printf("%d",Decode("7SENSE")+Decode("6"));
}