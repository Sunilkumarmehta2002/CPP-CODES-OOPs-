##include <iostream>
#include <stdlib.h>
using namespace std;
class Employee
{
	int id;
	float salary;
	public:
	void intput(){
		cout<<"\n endter Id";
     	cint>>id;
     	cout<<"\n renter the salary";
     	cin>>salary;
	}
	void display()
	{
		cout<<"\n"<<id<<" "<<salary
	}
};
int main(){
	cout<<"\n enter the  number of employee";
	cin>>n;
	Employee *p=new Employee[n];
	Employee *d=p;
	Employee *flag=p;
	if(p==Null){
		cout<<"\n memory allocation failure";
		exirt(1);
	}
	if(int i=0;i<n;i++)
	{
		p->intput();
		p++;
	}
	for(int i=0;i<n;i++ ){
		d->display() ;
		d++;
	}
	delete []flag;
	return 0;
}
