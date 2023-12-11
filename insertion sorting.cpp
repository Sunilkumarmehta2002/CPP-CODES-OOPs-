#include <iostream>
using namespace std;
int main()
{
	int arr[100];
	int n,current;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"array is :";
	for(int i=0;i<n;i++){
		cout<<arr[i];
		
	}
	for(int i=1;i<n;i++){
		current =arr[i];
		int j=i-1;
		while(current<arr[j]&&arr[j>=0]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	cout<<"sordet srry is :";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"";

	}
	return 0;
}

