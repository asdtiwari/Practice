/*Program3*/
#include<stdio.h>
int max(int x,int y){
	return (y>x)?y:x;
}
void main(){
	int a[]={12,1,-5,-3,7,4,8,9};
	int z=a[0],n=8,i=0,c=a[0];
	for(i=1;i<n;i++){
		c=max(a[i],c+a[i]);
		z=max(z,c);
	}
	printf("%d\n",z);
}	