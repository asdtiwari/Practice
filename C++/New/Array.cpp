/*Array in DSA*/
#include<iostream>
#include<array>
#define Size 100
using namespace std;
//--------------------------
class Array
{
	private:
		int array[Size],Index,NewElement,Loop,Find,Times;
	public:
		Array()
		{
			Index=-1;
		}
		void Insert();
		void Delete();
		void Traverse();
		void Search();
		void Update();
};
//--------------------------
void Array::Insert()
{
	if(Index==Size)
	{
		cout<<"\n!!!Array is Full!!!\nCan't perform Insert\n";
	}
	else
	{
		if(Index==-1)
		{
			cout<<"\nArray is fresh\nInsert First Element\n";
		}
		else
		{
			cout<<"\n***  Insert Element  ***\n";
		}
		cin>>NewElement;
		Index=Index+1;
		array[Index]=NewElement;
		cout<<"\nElement Stored Successfully\n";
	}
}
//--------------------------
void Array::Delete()
{
	if(Index==-1)
	{
		cout<<"\nNo Element is present\nCan't perform Delete\n";
	}
	else
	{
		if(Index==0)
		{
			cout<<"\nLast element "<<array[Index]<<" is being deleted\n";
		}
		else
		{
			cout<<"\nElement "<<array[Index]<<" is being deleted\n";
		}
		Index=Index-1;
		cout<<"\nElement Successfully Deleted\n";
	}
}
//--------------------------
void Array::Traverse()
{
	if(Index==-1)
	{
		cout<<"\nNo Element is present\nCan't perform Traverse\n";
	}
	else
	{
		cout<<"\n##  Output:\n";
		for(Loop=0;Loop<=Index;Loop++)
		{
			cout<<array[Loop]<<"\t";
		}
		cout<<"\n";
	}
}
//--------------------------
void Array::Search()
{
	if(Index==-1)
	{
		cout<<"\nNo Element is present\nCan't perform Search\n";
	}
	else
	{
		Times=0;
		cout<<"\nInsert element to search\n";
		cin>>Find;
		for(Loop=0;Loop<=Index;Loop++)
		{
			if(Find==array[Loop])
			{
				Times=Times+1;
				cout<<"\nTime "<<Times<<" Element "<<Find<<" at "<<Loop+1<<" Position\n";
			}
		}
		if(Times==0)
		{
			cout<<"\nElement "<<Find<<" is not present in array\n";
		}
	}
}
//--------------------------
void Array::Update()
{
	if(Index==-1)
	{
		cout<<"\nNo Element is present\nCan't perform Update\n";
	}
	else
	{
		Times=0;
		cout<<"\nInsert element to search to Update\n";
		cin>>Find;
		for(Loop=0;Loop<=Index;Loop++)
		{
			if(Find==array[Loop])
			{
				Times=Times+1;
				cout<<"\nTime "<<Times<<" Element "<<Find<<" at "<<Loop+1<<" Position\n";
				cout<<"\nInsert Element to Update\n";
				cin>>NewElement;
				array[Loop]=NewElement;
			}
		}
		if(Times==0)
		{
			cout<<"\nElement "<<Find<<" is not present in array\n";
		}
	}
}
//--------------------------
int main()
{
	Array Run;
	int Choice;
	do
	{
		cout<<"\n--------------------------";
		cout<<"\n*****  Array in DSA  *****";
		cout<<"\n--------------------------";
		cout<<"\n1::Insert\n2::Delete\n3::Traverse\n4::Search\n5::Update\n0::Exit\t";
		cin>>Choice;
		if(Choice==1)
		{
			Run.Insert();
			Run.Traverse();
		}
		else if(Choice==2)
		{
			Run.Delete();
			Run.Traverse();
		}
		else if(Choice==3)
		{
			Run.Traverse();
		}
		else if(Choice==4)
		{
			Run.Search();
		}
		else if(Choice==5)
		{
			Run.Update();
			Run.Traverse();
		}
		else if(Choice==0)
		{
			cout<<"\n***  Thank You  ***\n****    Exit   ****\n";
		}
		else
		{
			cout<<"\n!!!  Invalid Choice  !!!\n";
		}
	}while(Choice!=0);
	return 0;
}
//--------------------------