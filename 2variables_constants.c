#include<stdio.h>
int main(){
	int number,i,flag=0;
	printf("Enter the number to check whether its prime or not: ");
	scanf("%d",&number);
	for(i=2;i<number;i++){
		if(number%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d is prime number ",number);
	}
	else{
	    printf("%d is not prime number ",number);
	}
}
