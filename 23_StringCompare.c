//#include<stdio.h>
//int main(){
//	char string1[20],string2[20];
//	printf("Enter your first and second string: ");
//	gets(string1);
//	gets(string2);
//	printf("%s\n",string1);
//	printf("%s\n",string2);
//	int cmp=strcmp(string1,string2);
//	if(cmp==0){
//		printf("Both strings are same\n");
//	}
//	else
//	printf("Strings are not same\n");
//	printf("Comparison value is %d \n",cmp);
//}
#include<stdio.h>
#include<string.h>
int main(){
	char name1[20],name2[20];
	printf("Enter your first and second name: ");
	gets(name1);
	gets(name2);
	int i,flag=0;
	for(i=0;name1[i]!='\0' || name2[i]!='\0';i++){
		if(name1[i]!=name2[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Strings are not equal\n");
	}
	else{
		printf("Strings are same\n");
	}
}
