#include <iostream>
using namespace std;
void divide(double x,double y){
	cout<<"inside  function"<<endl;
	try{
		if(y==0.0)
		throw y;
		else 
		cout<<"division"<<x/y<<endl;
		
	}
	catch(double){
		cout<<"caught double insode the funcation"<<endl;
		throw;
	}
	cout<<"end of function"<<endl;
}
int main(){
	cout<<"inside main"<<endl;
	try{
		divide(10.5,2.0);
		divide(20.0,0.0);
		
	}
	catch (double){
		cout<<"caught double inside main"<<endl;
	}
	cout<<"end ofthe main"<<endl;
	return 0;
}
