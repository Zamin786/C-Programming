#include<stdio.h>
typedef struct student{
	char name[20];
	int data;
	float marks;
	int *ptr;
}student;
int main(){
	student obj={"Zamin",1,87.2};
   printf("YOur name is %s\n",obj.name);
   printf("Your data is %d\n",obj.data);
   printf("Your marks is %f\n",obj.marks);
}
