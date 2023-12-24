/*A dequeue is ordered set of elements in which elements may be inserted or retrieved from the either end. Using an array simulate a deque of characters and the operations retrieve left, retrieve right, insert left, insert right. Exceptional conditions such as dequeue full or empty should be reported. Use two pointers left and right for this simulation.*/
/*Author: ASDT Date: January 22, 2023*/
//------------------------------------
#include<stdio.h>
#define size 10
int deq[size];
int right=-1;
int left=-1;
#define full ((right-left)==(size-1))
#define empty (right==-1)
//------------------------------------
void traverse(void)
{
	register short i;
	printf("\n Left @ %d Right @ %d \n",left,right);
	if(empty)
		printf("\n Doubly Ended Queue is EMPTY \n Can't Perform TRAVERSE\n");
	else
	{
		printf("\nStored Data \n");
		for(i=left;i<=right;i++)
			printf(" %d ",deq[i]);
		printf("\n");
	}
	return;
}
//------------------------------------
void inright(void)
{
	if(full)
		printf("\n Doubly Ended Queue is FULL \n Can't perfrom INSERT FROM RIGHT \n");
	else if(right==size-1)
		printf("\n Already Last Position has Element \n Can't perfrom INSERT FROM RIGHT \n");
	else if(empty)
	{
		right=0;
		left=0;
		printf("\nInsert First Element: ");
		scanf("%d",&deq[right]);
		printf(" Element Stored Successfully \n");
	}
	else
	{
		printf("\nInsert Element: ");
		right++;
		scanf("%d",&deq[right]);
		printf(" Element Stored Successfully \n");
	}
	traverse();
	return;
}
//------------------------------------
void inleft(void)
{
	if(full)
		printf("\n Doubly Ended Queue is FULL \n Can't perfrom INSERT FROM LEFT \n");
	else if(left==0)
		printf("\n Already First Position has Element \n Can't perfrom INSERT FROM LEFT \n");
	else if(empty)
	{
		right=0;
		left=0;
		printf("\nInsert First Element: ");
		scanf("%d",&deq[left]);
		printf(" Element Stored Successfully \n");
	}
	else
	{
		printf("\nInsert Element: ");
		left--;
		scanf("%d",&deq[left]);
		printf(" Element Stored Successfully \n");
	}
	traverse();
	return;
}
//------------------------------------
void outright(void)
{
	auto short del;
	if(empty)
		printf("\n Doubly Ended Queue is EMPTY \n Can't Perform RETRIEVE FROM RIGHT \n");
	else if(right==left)
	{
		del=right;
		right=-1;
		left=-1;
		printf("\nLast Element ||%d|| Retrieved Successfully \n Now Doubly Ended Queue is Fresh \n",deq[del]);
	}
	else
	{
		del=right;
		right--;
		printf("\nElement ||%d|| Retrieved Successfully \n",deq[del]);
	}
	traverse();
	return;
}
//------------------------------------
void outleft(void)
{
	auto short del;
	if(empty)
		printf("\n Doubly Ended Queue is EMPTY \n Can't Perform RETRIEVE FROM LEFT \n");
	else if(right==left)
	{
		del=left;
		right=-1;
		left=-1;
		printf("\nLast Element ||%d|| Retrieved Successfully \n Now Doubly Ended Queue is Fresh \n",deq[del]);
	}
	else
	{
		del=left;
		left++;
		printf("\nElement ||%d|| Retrieved Successfully \n",deq[del]);
	}
	traverse();
	return;
}
//------------------------------------
int main(void)
{
	auto short opt;
	do
	{
		printf("\n==================== \n DOUBLY ENDED QUEUE\n==================== \n 1 :: Insert Right \n 2 :: Insert Left \n 3 :: Retrieve Right \n 4 :: Retrieve Left \n 5 :: Traverse \n 0 :: Exit \t");
		scanf("%hd",&opt);
		switch(opt)
		{
			case 1:
				inright();
				break;
			case 2:
				inleft();
				break;
			case 3:
				outright();
				break;
			case 4:
				outleft();
				break;
			case 5:
				traverse();
				break;
			case 0:
				printf("\n...Exit\n");
				break;
			default:
				printf("\n ! Invalid Choice ! \n");
				break;
		}
	}while(opt!=0);
	return 0;
}
//------------------------------------