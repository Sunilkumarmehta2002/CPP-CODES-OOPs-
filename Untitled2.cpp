#include <iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"i am member of the class A"<<endl;
			
		}
};
class B : public A{
	public : 
	void show()
	{
		cout<<"i am member of the class B"<<endl;
		
	}

};
int main(){
	B ob1;
	ob1.show();
	ob1.A::show()
}
