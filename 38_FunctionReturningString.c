#include<stdio.h>
char* chracter(char[]);
int main(){
	char name[10];
	char *x=chracter(name);
	printf("Your name is %s\n",x);
}
char* chracter(char name[]){
	printf("Enter your name: ");
	gets(name);
	return name;
}