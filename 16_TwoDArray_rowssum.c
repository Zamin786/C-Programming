#include<stdio.h>
int main(){
	int rows,columns,i,j,rowsum,colsum;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&rows,&columns);
	int matrix[rows][columns];
	printf("Enter matrix elements\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<rows;i++){
			rowsum=colsum=0;
		for(j=0;j<columns;j++){
			rowsum=rowsum+matrix[i][j];
			colsum=colsum+matrix[j][i];
		}
		printf("SR = %d\nSc= %d\n",rowsum,colsum);
	}
}
