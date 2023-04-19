#include<stdio.h>
int main()
{
    char name[6];
    printf("Ente your name: ");
    fgets(name,6,stdin);
    printf("YOur name is %s \n",name);
}