#include<stdio.h>
int main(){
	int myarray[4][2]={1,2,3,4,5,6};
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			printf("%d\t",myarray[i][j]);
		}
		printf("\n");
	}
}
