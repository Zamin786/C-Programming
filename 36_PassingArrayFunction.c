#include<stdio.h>
void array(int[]);
int main(){
	int myarray[5]={1,2,3,4,5};
	array(myarray);
	
}
void array(int fnarray[]){
	printf("%d\n",fnarray[1]);
}
