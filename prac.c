#include<iostream>
using namespace std;
class node{
	int data;
	node *left;
	node *right;
	public:
		node* create(){
			node *newnode,*root;
			newnode=new node;
			int x;
			cout<<"Enter your data: "<<endl;
			cin>>x;
			if(x==-1){
				return 0;
			}
			newnode->data=x;
			cout<<"Enter left link of: "<<x<<endl;
			newnode->left=create();
			cout<<"Enter right link of: "<<x<<endl;
			newnode->right=create();
			return newnode;
		}
		
};
int main(){
	node obj,*root;
	root=create();
}
