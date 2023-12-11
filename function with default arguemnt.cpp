#include <iostream>
using namespace std;
void fun(int);
void fun(int,int);
void fun(int);
{
	cout<<"value of i is "<<i<<endl;
}
void fun(int a,int b=9)
{
	cout<<"value of a is"<<a<<endl;
	cout<<"value of b is "<<b<<endl;
}
int main(){
	fun(12);
	return 0;
}
