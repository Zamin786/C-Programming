#include<stdio.h>
int main(){
	int rows,columns;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&rows,&columns);
	int myarray[rows][columns],i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&myarray[i][j]);
		}
	}
		for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d\t",myarray[i][j]);
		}
		printf("\n");
	}
}