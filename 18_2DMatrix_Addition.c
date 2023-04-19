#include<stdio.h>
int main(){
	int rows,columns,i,j;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&rows,&columns);
	int matrix[rows][columns],matrix2[rows][columns],sum[rows][columns];
	printf("Ente the row columns elements for matrix 1 an 2\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nEnter the rows and columns of matrix 2\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("\nMatrix 1 is\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
		printf("\nMatrix 2 is\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
	}
			printf("\nAddition of your matrix is\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			sum[i][j]=matrix[i][j]+matrix2[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
