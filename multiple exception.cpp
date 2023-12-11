#include<iostream>
using namespace std;
void Test(int x){
	try{
		if(x=1)throw x;
		else if (x==0) throw 'x';
		else if (x==-1)throw 1.0;
		cout<<"end of the block"<<endl;
	}
	catch(char c){
		cout<<"caught a charachter"<<endl;
		
	}
	catch(int m){
		cout<<"caught an integer"<<endl;
	}
	catch (double d){
		cout<<"caught a double"<<endl
	}
	cout<<"end of the try catch system"<<endl;
}
int main(){
	cout<<"testing multiple cathes"<<endl;
	cout<<"x==1"<<endl;
	Test(1);
	cout<<"x==0"<<endl;
	Test(0);
	cout<<"x== -1"endl;
	Test(-1);
	cout<<"x==2"<<endl;
	Test(2);
	return 0;
}
