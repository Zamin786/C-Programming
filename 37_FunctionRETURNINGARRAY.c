#include<stdio.h>
int* array(int myarray[],int size);
int main(){
int myarray[100],size;
printf("Enter the size of your array: ");
scanf("%d",&size);
int *ptr=array(myarray,size);
int i;
for(i=0;i<size;i++){
    printf("%d\t",*ptr+i);
}
}
int* array(int myarray[],int size){
    int i;
    printf("Enter your array elements\n");
    for(i=0;i<size;i++){
        scanf("%d",&myarray[i]);
    }
    return myarray;
}