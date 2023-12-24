/*WAP to enter four subject's marks and caluculate the percentage also annouce pass if % is greater than 60 and fail in case of less than 60%*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float maths,english,computer,science,sum,percent;
	printf("\n Result Calculator \n");
	printf("\nEnter the Marks of Subject\nMax Mark is 100 each subject\n");
	printf("Maths: ");
	scanf("%f",&maths);
	if(maths>100) exit(1);
	printf("English: ");
	scanf("%f",&english);
	if(english>100) exit(2);
	printf("Computer: ");
	scanf("%f",&computer);
	if(computer>100) exit(3);
	printf("Science: ");
	scanf("%f",&science);
	if(science>100) exit(4);
	sum=maths+english+computer+science;
	percent=(sum/400)*100;
	printf("\nTotal Marks %.2f\nPercent is %.2f",sum,percent);
	if(percent>=60)
		printf("\n:) Pass\n");
	else
		printf("\n:( Fail \n");
	return 0;
}