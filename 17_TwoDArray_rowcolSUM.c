#include<stdio.h>
int main(){
	int rows,columns,rowsum,colsum;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&rows,&columns);
	int matrix[rows][columns],i,j;
	printf("Enter your row and column elements: ");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
		printf("\nYour matrix is\n");
		for(i=0;i<rows;i++){
			for(j=0;j<columns;j++){
				printf("%d\t",matrix[i][j]);
			}
			printf("\n");
		}
		printf("\nIndividual row column sum is\n");
		for(i=0;i<rows;i++){
			rowsum=0,colsum=0;
			for(j=0;j<columns;j++){
				rowsum=rowsum+matrix[i][j];
				colsum=colsum+matrix[j][i];
			}
			printf("Sum of %d row is %d \n",i,rowsum);
			printf("Sum of %d column is %d \n",i,colsum);
		}
}
