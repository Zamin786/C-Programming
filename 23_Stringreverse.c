//#include<stdio.h>
//int main(){
//	char name[20];
//	printf("Enter your name: ");
//	gets(name);
//	printf("Your name is %s \n",name);
//	strrev(name);
//	printf("Reversed name is %s \n",name);
//}
#include<stdio.h>
int main(){
	char name[20],ch;
	printf("Enter your name: ");
	gets(name);
	int i,len=0;
	len=strlen(name);
//	len-1;
	printf("The length of your name is %d \n",len);
	
	for(i=0;i<=len/2;i++){
		ch=name[i];
		name[i]=name[len-1-i];
		name[len-1-i]=ch;
	}
	printf("%s\n",name);
}
