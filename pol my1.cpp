#include <iostream>
using namespace std;
class Father{
	public:
	void Pg(){
	cout<<"father Pg"<<endl;
	
	
	}
};
class Son:public Father{
	void Phd(){
		cout<<"son phd"<<endl;
	}
};
int main(){
	Father *queston;
	Son education;
//	Son *question;
//	Father education;
	question =& education;
	question-> Pg();
	question-> Phd();	
}
