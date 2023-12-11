#include <iostream>
using namespace std;
#include <string>
struct emp
{
	string name;
	
};
int main()
{
	emp e[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"enter the name of employee NO>"<<i+1<<" ";
		cin>>e[1].name;
		cout<<"\n name of all employee:\n>";
	}
    for(i=0;i<5;i++)
	{
		cout<<e[i].name<<endl;
	}
	cout<<endl;
	return 0;
		
	
}
