#include<stdio.h>
int main(){
	int a=10;
	char c='0';
	void *ptr;
	ptr=&a;
	printf("%d\n",*(int*)ptr);
	ptr=&c;
	printf("%c\n",*(char*)ptr);
}
