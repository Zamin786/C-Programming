#include<stdio.h>
int main(){
    int radius;
    printf("Enter the radius of your circle: ");
    scanf("%d",&radius);
    float pi=3.14;
    float area=pi*radius*radius;
    printf("The radius of your circle is %f \n",area);
}