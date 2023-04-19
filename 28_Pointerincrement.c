#include<stdio.h>
int main(){
	int myarray[]={1,4,5,6,7};
	int *ptr;
	ptr=&myarray[2];
//	ptr++;
	printf("%d\n",++(*ptr));
}
