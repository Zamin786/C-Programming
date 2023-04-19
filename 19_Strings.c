#include<stdio.h>
int main(){
    char name[10];
    printf("Enter your name: ");
    gets(name); //Outdated and no upper bound checking
    printf("Your name is %s\n",name);
}