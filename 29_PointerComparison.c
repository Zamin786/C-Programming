#include<stdio.h>
int main(){
	const int a=11;
	int *ptr;
	ptr=&a;
	*ptr=10;
	printf("%d\n",*ptr);
}
