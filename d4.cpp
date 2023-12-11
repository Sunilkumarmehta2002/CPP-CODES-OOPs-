#include <iostream>
using namespace std;
class base{
	public:
		base()
		{
			cout<<"constructure base \n";
		}
		virtule~base(){
			cout<<"destructing base \n";
			
		}
};
class derived1:public base{
	public:
	derived()
		{
			cout<<"constructure base \n";
		}
	~derived(){
			cout<<"destructing base \n";
			
		}
};
int main(){
	base* b=new derived1;
	delete b;
	return 0;
}
