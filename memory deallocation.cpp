#include<iostream>
using namespace std;
int main(){
	int *p=NULL;
	p=new int;
	if(p==NULL){
		cout<<"memory failure"<<endl;
		exit(1);
	}
	else{
		cout<<"\nmemory allocated"<<endl;
		*p=12
		cout<<"integer value sotred is:"<<*p<<endl;
		delete p;
		cout<<"\n memory deallocation";
	}
	return 0;
}
