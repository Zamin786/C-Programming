// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[10];
//     printf("Enter your name: ");
//     fgets(name,10,stdin);
//     printf("Your name is %s\n",name);
//     int len=strlen(name);
//     printf("Length of your string is %d \n",len);
// }
#include<stdio.h>
int main(){
    char name[10];
    printf("Enter your name: ");
    // fgets(name,10,stdin);
    gets(name);
    printf("Your name is %s\n",name);
    int i=0,len=0;
    while (name[i]!='\0')
    {
        len++;
        i++;
    }
    printf("Length is %d \n",len);
}