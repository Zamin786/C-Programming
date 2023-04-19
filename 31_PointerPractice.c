#include<stdio.h>
int main(){
		int i;
	int myarray[]={10,11,-1,56,67,5,4};
	for(i=0;i<sizeof(myarray)/4;i++){
		printf("%d\t",myarray[i]);
	}
	int *p,*q;
	p=myarray;
	printf("%d\n",*p);
	printf("%d %d %d \n",(*p)++,*p++,*++p);
	printf("%x\n",&p);
	printf("%x\n",&myarray[2]);
	q=p+3;
	printf("%d\n",*q);
	printf("%d = two\n",*q-3);
	printf("%d = sixteen\n",*--p+5);
		printf("p = %d\n",*p);
	printf("%d\n",*p + *q);
	for(i=0;i<sizeof(myarray)/4;i++){
		printf("%d\t",myarray[i]);
	}

}