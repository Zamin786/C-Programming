// What are instructions and operators in c
// These are statements in a programme
/*There are three types of instructions in c
1- Type declaration
2-Airthmetic instruction
3-Control instruction*/


// Type declation instruction:-Kisi bhi variable ko declare karna uss k type k sath
#include<stdio.h>
#include<math.h>
int main(){

int a=4;
int b=a;
char c='*';
printf("Your integer number is %d \n",a);
printf("The value of b is %d \n",b);
printf("Your chracter is %c \n",c);
int p,q;
printf("Enter your number to get its raised to the power: ");
scanf("%d%d",&p,&q);
int power=pow(p,q);
printf("The raised to the power of your number is %d: ",power);
}