#include <iostream>
using namespace std;
class Test{
	public:
		Test(){
			cout<<"constructor of the test"<<endl;
		}
		~Test(){
			cout<<"destructor of the test"<<endl;
		}
};
int main(){
	try{
		Test t1;
		throw 10;
		
	}
	catch(int i){
		cout<<"caught"<<i<<endLY;
	}
}
write A prigram to creat a class check ing with integer dat menber int x there is a ,member funcation void getdata () there is a funcation chack if intput
is even then throw the cvlass object and call the disply member funa=cation wioth message invalid
