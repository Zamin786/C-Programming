#include<stdio.h>
int main(){
	int myarray1[5],myarray2[5],i,myarray3[5];
	printf("Enter your first array elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&myarray1[i]);
	}
	printf("\nEnter your second array elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&myarray2[i]);
	}
	printf("\nYour array is\n");
	for(i=0;i<5;i++){
		printf("%d\t",myarray1[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d\t",myarray2[i]);
	}
	printf("\nSum of your array is\n");
	for(i=0;i<5;i++){
		myarray3[i]=myarray1[i]+myarray2[i];
		printf("%d\t",myarray3[i]);
	}
}