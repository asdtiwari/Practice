/*A stack is a data structure in which addition of new element or deletion of existing element always takes place at the same end known as 'top' of stack. WAP to implement a stack using a linked list.*/
/*Author: ASDT DAte: January 31, 2023*/
//------------------------------------
#include<stdio.h>
#include<stdlib.h>
//------------------------------------
typedef struct stack
{
	int data;
	struct stack *below;
}stack;
//------------------------------------
stack *top=NULL;
//------------------------------------
void push(void)
{
	int data;
	stack *temp;
	temp=(stack *)malloc(sizeof(stack));
	temp->below=top;
	top=temp;
	printf("\nEnter an interger: ");
	scanf("%d",&data);
	top->data=data;
	printf("\nData Stored Successfully\n");
	return;
}
//------------------------------------
void pop(void)
{
	stack *temp;
	if(top==NULL)
		printf("\nStack is underflow. \n So, Pop() can't execute\n");
	else
	{
		temp=top;
		top=temp->below;
		printf("\nPop is executing \n %d is going to popped",temp->data);
		free(temp);
		printf("\n%d has been popped\n");
	}
	return;
}
//------------------------------------
void traverse(void)
{
	stack *temp;
	if(top==NULL)
		printf("\nStack is underflow \n So, Traverse can't execute\n");
	else
	{
		printf("\n--------------------");
		printf("\n    Stored Data:   \n");
		printf("--------------------\n");
		for(temp=top;temp!=NULL;temp=temp->below)
			printf(" |%4d|\n",temp->data);
	}
	return;
}
//------------------------------------
int main(void)
{
	short opt;
	do
	{
		printf("\n===============================");
		printf("\n||     Stack of Intergers    ||\n");
		printf("===============================\n");
		printf("\nOptions \n 1 :: Push \n 2 :: Pop \n 3 :: Traverse \n 0 :: Exit\t");
		scanf("%hd",&opt);
		switch(opt)
		{
			case 1:
				push();
				traverse();
				break;
			case 2:
				pop();
				traverse();
				break;
			case 3:
				traverse();
				break;
			case 0:
				printf("\n...EXIT\n");
				break;
			default:
				printf("\n :( Invalid Choice \n");
		}
	}while(opt!=0);
	return 0;
}
//------------------------------------