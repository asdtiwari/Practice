/*Write a program to count total number of notes in given amount*/
#include<stdio.h>
void main()
{
	int q,w,e,r,t,y,u,i,o,p,a,s;
	printf("Enter amount");
	scanf("%d",&a);
	s=a;
	q=a/2000;
	a%=2000;
	w=a/500;
	a%=500;
	e=a/200;
	a%=200;
	r=a/100;
	a%=100;
	t=a/50;
	a%=50;
	y=a/20;
	a%=20;
	u=a/10;
	a%=10;
	i=a/5;
	a%=5;
	o=a/2;
	a%=2;
	p=a/1;
	a%=1;
	printf("%d has %d notes of 2000\n%d notes of 500\n%d notes of 200\n%d notes of 100\n%d notes of 50\n%d notes of 20\n%d notes of 10\n%d coins of 5\n%d coins of 2\n%d coins of 1",s,q,w,e,r,t,y,u,i,o,p);
}