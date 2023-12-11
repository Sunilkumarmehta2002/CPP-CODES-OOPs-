#include <iostream>
using namespace std;
class sun
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter the values of a and b :"<<endl;
			cin>>a>>b;
		}
		void sum()
		{
			int c;
			c = a + b;
			cout<<"the sum is :"<<c;
			
		}
};
int main()
{
	sun obj1;
	obj1.getdata();
	obj1.sum();
}
