#include<stdio.h>
int main(){
	int array1[5]={2,3,1,4,5};
	int array2[5]={1,2,7,8,9};
	int array3[10],length=0;
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		if(array1[i]==array2[j]){
			array3[length++]=array1[i];
		}
		}
	}
	printf("\nYour array is\n");
	for(i=0;i<length;i++){
		printf("%d\t",array3[i]);
	}
}
