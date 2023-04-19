#include<stdio.h>
int sum(int,int);
int main(){
	int (*ptr)(int,int)=&sum;
	int s=(*ptr)(2,3);
	printf("Sum is %d\n",s);
}
int sum(int a,int b){
	return a+b;
}
