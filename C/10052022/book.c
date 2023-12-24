/*WAP to handle a file which contains the info regarding to book like code of book, name and price. The program also contains the user choice to increase the list, show all and search option*/
#include<stdio.h>
struct book
{
	int c,p;
	char n[20];
};
void main()
{
	FILE *p;
	struct book b;
	int ch,f,s;
	do
	{
		printf("\nBook Management\nEnter Your Choice\n1. Add\n2. Show All\n3. Search\n4. Quit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Details to Add Book\nBook Code, Book Name and Price\n");
				p=fopen("book.txt","a");
				scanf("%d%s%d",&b.c,b.n,&b.p);
				fwrite((char*)&b,sizeof(b),1,p);
				printf("Book Successfully Added\n");
				fclose(p);
				break;
			case 2:
				p=fopen("book.txt","r");
				printf("\nCode\tName\t\tPrice\n");
				while(fread((char*)&b,sizeof(b),1,p))
				{
					printf("%d\t%s\t\t%d\n",b.c,b.n,b.p);
				}
				fclose(p);
				break;
			case 3:
				f=0;
				printf("\nEnter Book Code to search in store\n");
				scanf("%d",&s);
				p=fopen("book.txt","r");
				while(fread((char*)&b,sizeof(b),1,p))
				{
					if(s==b.c)
					{
						printf("\nBook Found\nCode %d\nName %s\nPrice %d\n",b.c,b.n,b.p);
						f=1;
						break;
					}
				}
				if(f==0)
				{
					printf("\nBook Not Found\n");
				}
				fclose(p);
				break;
			case 4:
				printf("\nThanks to use it\n");
				break;
			default:
				printf("\nInvalid Choice\n");
				break;
		}
	}while(ch!=4);
}