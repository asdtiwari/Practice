/*C Queue in DSA*/
#include<stdio.h>
#define size 5
int CQ[size];
int front=-1;
int rear=-1;
int iffull()
{
	if(rear-front==size-1||rear==front-1)
	{
		return 1;
	}
	return 0;
}
int ifempty()
{
	if(rear==-1&&front==-1)
	{
		return 1;
	}
	return 0;
}
void Enqueue()
{
	int myelement;
	if(iffull())
	{
		printf("\nC Queue is full, can't perform enqueue()\n");
		printf("\nRear is at %d and front at %d\n",rear,front);
	}
	else
	{
		if(rear==size-1)
		{
			printf("\nEnqueue element in C Queue\n");
			scanf("%d",&myelement);
			rear=0;
			CQ[rear]=myelement;
			printf("\nElement enqueued Sucessfully\n");
			printf("\nRear is at %d and front at %d\n",rear,front);
		}
		else
		{
			if(ifempty())
			{
				printf("\nC Queue is fresh\nEnqueue first element\n");
				scanf("%d",&myelement);
				front=0;
				rear=0;
				CQ[rear]=myelement;
				printf("\nFirst element enqueued successfully\n");
				printf("\nRear is at %d and front at %d\n",rear,front);
			}
			else
			{
				printf("\nEnqueue element in C Queue\n");
				scanf("%d",&myelement);
				rear=rear+1;
				CQ[rear]=myelement;
				printf("\nElement enqueued Sucessfully\n");
				printf("\nRear is at %d and front at %d\n",rear,front);
			}
		}
	}
}
void Dequeue()
{
	if(ifempty())
	{
		printf("\nC Queue is empty, can't perform dequeue()\n");
		printf("\nRear is at %d and front at %d\n",rear,front);
	}
	else
	{
		if(front==rear)
		{
			printf("\nLast element %d is being dequeued\n",CQ[front]);
			front=-1;
			rear=-1;
			printf("\nLast element dequeued successfully\nNow C Queue is fresh\n");
			printf("\nRear is at %d and front at %d\n",rear,front);
		}
		else
		{
			if(front==size-1)
			{
				printf("\nElement %d is being dequeued\n",CQ[front]);
				front=0;
				printf("\nElement dequeued successfully\n");
				printf("\nRear is at %d and front at %d\n",rear,front);
			}
			else
			{
				printf("\nElement %d is being dequeued\n",CQ[front]);
				front=front+1;
				printf("\nElement dequeued successfully\n");
				printf("\nRear is at %d and front at %d\n",rear,front);
			}
		}
	}
}
void Traverse()
{
	if(ifempty())
	{
		printf("\nC Queue is Empty, can't perform traverse()\n");
	}
	else
	{
		int sploop[size][size];
		int outer,inner,reminner,store;
		for(outer=0;outer<size;outer++)
		{
			store=outer;
			for(inner=0;inner<size-outer;inner++)
			{
				sploop[outer][inner]=store;
				store++;
			}
			reminner=inner;
			for(inner=0;inner<outer;inner++)
			{
				sploop[outer][reminner]=inner;
				reminner++;
			}
		}	
		printf("\nTraverse\n");
		printf("\n----------------------------\n");
		for(outer=0;outer<=5;outer++)
		{
			printf("%d ",CQ[sploop[front][outer]]);
			if(sploop[front][outer]==rear)
			{
				break;
			}
		}
		printf("\n----------------------------\n");
	}
}
void main()
{
	int choice;
	do
	{
		printf("\n==========================\n");
		printf("\nCircular Queue\nEnter your choice\n1. Enqueue\n2. Dequeue\n3. Traverse\n0. Exit\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Enqueue();Traverse();break;
			case 2:	Dequeue();Traverse();break;
			case 3:Traverse();break;
			case 0:printf("\nThanks\nExit...\n");break;
			default:printf("\nInvalid Choice\n");break;
		}
	}while(choice!=0);
	printf("\n==========================\n");
}