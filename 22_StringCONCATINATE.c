// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name1[10],name2[10];
//     printf("Enter your first and second name: ");
//     gets(name1);
//     gets(name2);
//     printf("Name 1 = %s\nName 2 = %s\n",name1,name2);
//     printf("Concatinated = %s \n",strcat(name1,name2));
// }
#include<stdio.h>
#include<string.h>
int main(){
	char name1[20],name2[20];
	printf("Enter your first and last name: ");
	gets(name1);
	gets(name2);
	printf("Your first name is %s \n",name1);
	printf("Your last name is %s \n",name2);
	int i,len1,len2;
	len1=strlen(name1);
	len2=strlen(name2);
	for(i=0;i<=len2;i++){
		name1[len1+i]=name2[i];
	}
	printf("your string  is concatinated\n%s",name1);
}
