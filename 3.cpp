#include <iostream>
using namespace std;
class example 1{
	const char* ptr;
	public:
		example1(){
			ptr=new char[8];
			ptr="Dynamic";
		}
		void show()
		{
			cout<<ptr<<endl;
		}
};
int main(){
	example1 *ptr =new example1;
	
}
