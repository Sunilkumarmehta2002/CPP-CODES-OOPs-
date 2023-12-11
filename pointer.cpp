#include <iostream>
using namespace std;
class array{
	int *arr; int size;
	public:
	void get_data(int n){
		size=n;
		int sum;
		arr=new int[size];
		cout<<"\n enter elements";
		for(int i=0;i<size;i++)
		{
		sum +=*(arr+i);
		}
		cout<<"\n sum of elements"<<sum;
		
	}
};
int main(){
	array a;
	int n;
	cout<<"\n enter the number of elements"<<endl;
	cin>>n;
	a.get_data(n); 
	a.add(n);
	return 0;
}
