#include <iostream>
using namespace std;
class Address{
	public:
		string street;
		string city;
		string state;
		string zip;
};
class Person{
	public:
		Person(string name): name(name),address(NULL){
		}
		void setAddress(Address* address){
			this->address = address;
			
		}
		private:
			string name:
				Address* address;
};
int main(){
	Address* 
}
