#include<stdio.h>
int main(){
	//print reverse of a number
	int number;
	printf("Enter your number: ");
	scanf("%d",&number);
	int i;
	while(number!=0){
		int ld=number%10;
		printf("%d",ld);
		number/=10;
	}
}
