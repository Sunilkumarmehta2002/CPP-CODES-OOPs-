#include <iostream>
using namespace std;
int n;
cin>>n;
for(int i=2;i<n;i++){
	if(n%i==0){
		cout<<"not prime ";
	}
	else{
		cout<<"prime";
	}
}
