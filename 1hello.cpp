#include<iostream>
using namespace std;
int main(){
	int myarray[5],size,i;
	cout<<"Enter the size of your array"<<endl;
	cin>>size;
	cout<<"Enter array elements\n"<<endl;
	for(i=0;i<size;i++){
		cin>>myarray[i];
	}
	printf("\nYour array is\n");
	for(i=0;i<size;i++){
		cout<<myarray[i]<<'\n';
	}
}
