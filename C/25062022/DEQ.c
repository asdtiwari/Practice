/*DEQ in DSA*/
#include<stdio.h>
#define size 5
int DEQ[size];
int front=-1;
int rear=-1;
int isEmpty()
{
	if(rear==-1&&front==-1)
	{
		return 1;
	}
	return 0;
}
int isFull()
{
	if(rear-front==size-1)
	{
		return 1;
	}
	return 0;
}
void EnqueueRear()
{
	int myelement;
	if(isFull())
	{
		printf("\nDEQ is full, can't perform EnqueueRear()\n");
	}
	else if(isEmpty())
	{
		printf("\nDEQ is fresh, Enqueue first element by using rear\n");
		scanf("%d",&myelement);
		front=0;
		rear=0;
		DEQ[rear]=myelement;
		printf("\nEnqueued successfully\n");
	}
	else
	{
		printf("\nEnqueue element by using rear\n");
		scanf("%d",&myelement);
		rear=rear+1;
		DEQ[rear]=myelement;
		printf("\nEnqueued successfully\n");
	}
}
void EnqueueFront()
{
	int myelement;
	if(isFull())
	{
		printf("\nDEQ is full, can't perform EnqueueFront()\n");
	}
	else if(isEmpty())
	{
		printf("\nDEQ is fresh, Enqueue first element by using front\n");
		scanf("%d",&myelement);
		front=0;
		rear=0;
		DEQ[front]=myelement;
		printf("\nEnqueued successfully\n");
	}
	else if(front==0)
	{
		printf("\nNo place available to enqueue element from front\n");
	}
	else
	{
		printf("\nEnqueue element by using front\n");
		scanf("%d",&myelement);
		front=front-1;
		DEQ[front]=myelement;
		printf("\nEnqueued successfully\n");
	}
}
void DequeueRear()
{
	if(isEmpty())
	{
		printf("\nDEQ is empty, can't perform DequeueRear()\n");
	}
	else if(front==rear)
	{
		printf("\nLast element %d is being Dequeued by using rear\n",DEQ[rear]);
		rear=-1;
		front=-1;
		printf("\nElement Dequeued successfully\nNow, DEQ is fresh\n");
	}
	else
	{
		printf("\nElement %d is being Dequeued by using rear\n",DEQ[rear]);
		rear=rear-1;
		printf("\nElement Dequeued successfully\n");
	}
}
void DequeueFront()
{
	if(isEmpty())
	{
		printf("\nDEQ is empty, can't perform DequeueFront()\n");
	}
	else if(front==rear)
	{
		printf("\nLast element %d is being Dequeued by using front\n",DEQ[front]);
		rear=-1;
		front=-1;
		printf("\nElement Dequeued successfully\nNow, DEQ is fresh\n");
	}
	else
	{
		printf("\nElement %d is being Dequeued by using front\n",DEQ[front]);
		front=front+1;
		printf("\nElement Dequeued successfully\n");
	}
}
void Traverse()
{
	if(isEmpty())
	{
		printf("\nDEQ is empty, can't perform Traverse()\n");
	}
	else
	{
		int loop;
		printf("\nDEQ Output\n");
		printf("\n--------------------------------\n");
		for(loop=front;loop<=rear;loop++)
		{
			printf("%d ",DEQ[loop]);
		}
		printf("\n--------------------------------\n");
	}
}
void main()
{
	int choice;
	do
	{
		printf("\n=============================\n");
		printf("\nDouble-ended Queue\n1. EnqueueRear\n2. EnqueueFront\n3. DequeueRear\n4. DequeueFront\n5. Traverse\n0. Exit\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:EnqueueRear();Traverse();break;
			case 2:EnqueueFront();Traverse();break;
			case 3:DequeueRear();Traverse();break;
			case 4:DequeueFront();Traverse();break;
			case 5:Traverse();break;
			case 0:printf("\nExit\nThanks\n");break;
			default:printf("\nInvalid Choice\n");break;
		}
	}while(choice!=0);
	printf("\n=============================\n");
}