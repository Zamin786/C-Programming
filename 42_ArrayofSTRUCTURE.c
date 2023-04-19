#include<stdio.h>
struct student{
	char name[20];
	int data;
};
int main(){
	int n,i;
	printf("Enter the number of students whose data you want to store: ");
	scanf("%d",&n);
	struct student obj[n];
	printf("Enter student details\n\n");
	for(i=0;i<n;i++){
		printf("Enter the details of %d student\n\n",i);
		scanf("%s",&obj[i].name);
		scanf("%d",&obj[i].data);
	}
	printf("\n\nData of students is\n");
		for(i=0;i<n;i++){
		printf("Name of %d student is %s\n",i,obj[i].name);
		printf("Roll number of %d student is %d \n",i,obj[i].data);
	}
}