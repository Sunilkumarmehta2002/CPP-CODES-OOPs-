#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string s;
	of stream of ("result.txt");
	of<<"I AM FROM K22BS ";
	of.close();
	ifstream inf("result.txt");
	getline(inf,s);
	cout<<s;
	inf.close();
	}
