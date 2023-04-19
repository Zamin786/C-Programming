#include<stdio.h>
int main(){
	int rows,columns,i,j;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&rows,&columns);
	printf("Rows= %d \tcolumns=%d\n",rows,columns);
	int myarray[rows][columns];
	printf("Enter your array elements\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&myarray[i][j]);
		}
	}
		printf("\nYour array is\n");
		for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d\t",myarray[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose\n");
	for(i=0;i<columns;i++){
		for(j=0;j<rows;j++){
			printf("%d\t",myarray[j][i]);
		}
		printf("\n");
	}
}
