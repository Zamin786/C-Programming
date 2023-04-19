#include<stdio.h>
int main(){
	int myarray[2][2],i,j,sum=0;
	printf("Enter your array elements: ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&myarray[i][j]);
		}
	}
	printf("\nYour array is\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",myarray[i][j]);
			sum=sum+myarray[i][j];
		}
		printf("\n");
	}
	printf("\nThe sum of your array is %d \n",sum);
}
