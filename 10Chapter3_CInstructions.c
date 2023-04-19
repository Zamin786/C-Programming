// control instructions
// types of control instructions
// Sequence control,,decision control,,,loop control,,,case control
#include<stdio.h>
int main(){
    int a=4,b=4;
    int c=a==b;
    printf("%d \n",c);
    // operators in c
    /*Airthmetic operators= +,-,*,/,%
    Realtional operators are:- <,>,<=,>=,,!=
    logical operators:- &&,,,,||,,,,!
    Bitwise operators:- &,,|,,^,,,~,,,<<,,,>>
    */
   int number;
   printf("Enter your number:");
   scanf("%d",&number);
   if(number%2==0){
    printf("Your number is even\n");
   }
   else{
    printf("Your number is odd\n");
   }
}