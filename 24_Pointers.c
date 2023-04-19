#include<stdio.h>
int main(){
	int age;
	int *ptr;
	ptr=&age;
	printf("Enter your age: ");
	scanf("%d",ptr);
printf("Your age is %d\n",age);
printf("Memory address of age is %x\n",ptr);
printf("Value of age through pointer is %d\n",*ptr);
}