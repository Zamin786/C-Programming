#include<stdio.h>
void sum(int a,int b){
	printf("Sum is %d\n",a+b);
}
void sub(int a,int b){
	printf("Subtraction is %d\n",a-b);	
}
int main(){
	display(&sum);
	display(&sub);
}
void display(int (*ptr)(int,int)){
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	(*ptr)(x,y);
}



//#include<stdio.h>
//int sum(int a,int b){
//	return a+b;
//}
//int sub(int a,int b){
//	return a-b;
//}
//int main(){
//	int add=callback(&sum);
//	printf("Add = %d\n",add);
//	int subt=callback(&sub);
//	printf("SUbtract = %d\n",subt);
//}
//int callback(int (*ptr)(int,int)){
//	int a,b;
//	printf("Enter two numbers: ");
//	scanf("%d%d",&a,&b);
//	(*ptr)(a,b);
//}
