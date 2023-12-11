#include<iostream>
using namespace std;
int main(){
	int *p= NULL;
	p=new int;
	if(p==NULL){
		cout<<"memory allocation failure";
		exit(1);
	}
	return 0;
}
