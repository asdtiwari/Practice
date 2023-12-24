/*Question:
If the string "Alice in wonder land" is fed to the following scanf() statement, what will be the contents of arrays str1, str2, str3, and str4?
scanf("%s%s%s%s",str1,str2,str3,str4);
Answer: 
str1="Alice";
str2="in";
str3="wonder";
str4="land";*/
/*Author: ASDT Date: January 26, 2023*/
//--------------------------------------
#include<stdio.h>
//--------------------------------------
int main(void)
{
	char str1[10],str2[10],str3[10],str4[10];
	printf("\nType: Alice in wonder land\n");
	scanf("%s%s%s%s",str1,str2,str3,str4);
	printf("\nOutput\nStr1 : %s \nStr2 : %s \nStr3 : %s \nStr4 : %s \n",str1,str2,str3,str4);
	return 0;
}
//--------------------------------------