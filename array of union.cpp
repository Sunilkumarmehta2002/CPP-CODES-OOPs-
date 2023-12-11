#include <iostream>
using namespace std;
#include <string>
union data
{
	int v1;
	char v2;
	double v3;
	
};
int main()
{
	const int size = 5
	data dataArray[size];
	
	dataArray[0].v1=42;
	dataArray[1].v2='A';
	dataArray[2].v3=3.14;
	dataArray[3].v1=100;
	dataArray[4].v2='Z';
	
	cout<<"union of array"<<endl;
	
	for(int i=0;i<size;i++)
	{
		cout<<"index"<<i<<":";
		if(i%3==0){
			cout<<"integer value:"<<dataArray[i].v1<endl;
			
		}
		else if( i%3=1){
			cout<<" value:"<<dataArray[i].v2<endl;
		}
		else {
			cout<<" value:"<<dataArray[i].v3<endl;
		}
		
	}
}
