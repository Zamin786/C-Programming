#include<stdio.h>
int main(){
    int age;
    int *ptr;
    ptr=&age;
    int **pptr;
    pptr=&ptr;
    printf("Enter your age: ");
    scanf("%d",ptr);
printf("Value of age is %d\n",age);
printf("Value of age through pointer is %d\n",*ptr);
printf("Memory address of age is %x\n",ptr);
printf("Memory address of ptr itself is %x\n",pptr);
printf("Value of age through pptr is %d\n",**pptr);
printf("Memory address of pptr iteself is %x\n",&pptr);
}