#include <iostream>
union data
{
	int value1;
	float value2;
	char value3;
	
};
int main()
{
//	mydata is the variable of data of union
	data mydata; 
	mydata.value1=42;
	std::cout<<"integer vlaue: "<<mydata.value1<<std::endl;
	
	mydata.value2=3.14f;
	std::cout<<"float value: "<<mydata.value2<<std::endl;
	
	mydata.value3='A';
	std::cout<<"char value: "<<mydata.value3<<std::endl;
	return 0;
}

