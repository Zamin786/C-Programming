#include<iostream>
using namespace std;
class student{
	string name;
	string uid;
	friend void get_function(student);
	friend void print_function(student);
};
void get_function(student obj){
	cout<<"Enter your name: "<<endl;
	cin>>obj.name;
	cout<<"Enter your uid: "<<endl;
	cin>>obj.uid;
}
void print_function(student obj){
	cout<<"Your name is: "<<obj.name<<endl;
	cout<<"Your uid is: "<<obj.uid<<endl;
}
int main(){
	student obj;
	get_function(obj);
}
