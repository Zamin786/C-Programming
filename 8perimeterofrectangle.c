#include<stdio.h>
int main(){
//Write a c programme to calculate the perimeter of a rectangle
int length,breadth,perimeter;
printf("Enter the length and breadth of your rectangle: ");
scanf("%d%d",&length,&breadth);
perimeter=2*(length+breadth);
printf("The perimeter of your rectangel is %d \n",perimeter);
}