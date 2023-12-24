//WAP to find whether the given input is armstrong or not
#include<stdio.h>
#include<math.h>
int main(void)
{
	int inp,o,t,h,sum;
	printf("\n Armstrong No. \n");
	printf("\nEnter a three digit No.: ");
	scanf("%d",&inp);
	if(inp<100 || inp>999)
		 printf("\n %d is not a 3 digit No. \n",inp);
	else	//123%100=23/10=2
	{
		o=inp%10;
		t=(inp/10)%10;
		h=inp/100;
		sum=(o*o*o)+pow(t,3)+pow(h,3);
		if(inp==sum)
			printf("\n %d is armstrong No.\n",inp);
		else
			printf("\n %d is not an armstong no.\n",inp);
	}
	return 0;
}