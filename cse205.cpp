#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
}; 
struct Node *head ,*tmp;
int main(){
	int choice,count=0,val=5;
	head=NULL;
	while(choice){
		Node* newnode=new Node();
		cout<<"ENter the data";
		cin>>newnode->data;
		newnode->next=NULL;
		if(head==NULL){
			head=tmp=newnode;
		}
		else{
			tmp->next=newnode;
			tmp=newnode;
			
		}
		cout<<"Do you want to continue:(0,1):";
		cin>>choice;
		
	}
	tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<"->";
		tmp=tmp->next;
		
	}
	Node *pos;
	tmp=head;
	while(tmp!=NUll){
		if(val==tmp->data){
			pos=tmp;
			break;
		}
		else{
			tmp=tmp->next;
			count++;
		}
		cout<<"node found at position"<<count"and the address of node is :"<<pos;
	}
	return 0;
}
