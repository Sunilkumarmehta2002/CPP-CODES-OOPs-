#include <iostream>
using namespace std;
template<class T >
T cube (T num){
	return num* num * num;
}
int main(){
	cout<<cube<<int>(12)<<endl;
	cout<<cube<float>(12.12)<<endl;
	cout<<cube<double>(12.1234212)<<endl;
	return 0;
}
