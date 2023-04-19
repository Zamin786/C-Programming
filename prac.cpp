#include<iostream>
using namespace std;
class Employee{
	int id;
	int count;
	public:
		void set_data(void){
			cout<<"Enter your id: "<<endl;
			cin>>id;
		}
		void get_data(void){
			cout<<"Your id is: "<<id<<endl;
		}
};
int main(){
	Employee zamin,aqsajan,zohanraja;
	zamin.set_data();
	zamin.get_data();
	aqsajan.set_data();
	aqsajan.get_data();
	zohanraja.set_data();
	zohanraja.get_data();
}
