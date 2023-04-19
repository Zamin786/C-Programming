#include<stdio.h>
int main(){
	int myarray[]={50,1,-1,10,11};
	int *p=&myarray[0];
	int *q=&myarray[4];
	int d=p-q;
	printf("%d\n",d);
	*q=25;
	d=q-p;
	printf("%d\n",d);
	*p=27;
	q=q-3;
	printf("%d\n",q);
	printf("a[1] = %u\n",&myarray[1]);
	p=p+3;
	d=p-q;
	printf("%d\n",d);
}
