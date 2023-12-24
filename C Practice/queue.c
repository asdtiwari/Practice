/*In a data structure called queue the addition of new element takes place at the end (called 'rear' of queue). whereas deletion takes place at the other end (called 'front' of queue). WAP to implement a queue using a linked list.*/
/*Author: ASDT Date: January 31, 2023*/
//------------------------------------
#include<stdio.h>
#include<stdlib.h>
//------------------------------------
typedef struct queue
{
	int data;
	struct queue *next;
}queue;
//------------------------------------
queue *front=NULL;
queue *rear=NULL;
//------------------------------------
void enqueue(void)
{
	queue *temp;
	int data;
	temp=(queue *)malloc(sizeof(queue));
	printf("\nEnter a number: ");
	scanf("%d",&data);
	temp->data=data;
	if(front==NULL && rear==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
	temp->next=NULL;
	printf(" Enqueued Successfully\n");
	return;
}
//------------------------------------
void dequeue(void)
{
	queue *temp;
	if(front==NULL && rear==NULL)
		printf("\nQueue is Empty \n Can't perform dequeue\n");		
	else
	{
		temp=front;
		if(front==rear)
		{
			front=NULL;
			rear=NULL;
		}
		else
			front=front->next;
		printf("\n%d is dequeing from Queue",temp->data);
		free(temp);
		printf("\n Dequeued Successfully\n");
	}
	return;
}
//------------------------------------
void traverse(void)
{
	queue *temp;
	if(front==NULL && rear==NULL)
		printf("\nQueue is Empty \n Can't perform Traverse\n");
	else
	{
		printf("\n-------------");
		printf("\n Stored Data \n");
		printf("-------------\n");
		for(temp=front;temp!=NULL;temp=temp->next)
			printf(" %d ",temp->data);
		printf("\n");
	}
	return;
}
//------------------------------------
int main(void)
{
	short opt;
	do
	{
		printf("\n =============================");
		printf("\n |     Queue of Integers     | \n");
		printf(" =============================\n");
		printf("\nOptions: \n 1 :: Enqueue \n 2 :: Dequeue \n 3 :: Traverse \n 0 :: Exit\t");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				enqueue();
				traverse();
				break;
			case 2:
				dequeue();
				traverse();
				break;
			case 3:
				traverse();
				break;
			case 0:
				printf("\n...Exit\n");
				break;
			default:
				printf("\n :( Invalid Choice\n");
		}
	}while(opt!=0);
	return 0;
}
//------------------------------------