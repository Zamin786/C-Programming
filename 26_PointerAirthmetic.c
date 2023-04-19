#include<stdio.h>
int main(){
    int myarray[100],i,size;
    int *ptr;
    ptr=&myarray[0];
    printf("Enter the size of your array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter your element at index %d: ",i);
        scanf("%d",ptr+i);
    }
printf("\nYour array is\n");
for(i=0;i<size;i++){
    printf("%d\t",*ptr+i);
}
}