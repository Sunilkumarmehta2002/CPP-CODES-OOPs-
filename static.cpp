#include <iostream>
 using namespace std;
class Student{
	public: 
	static int objectCount;
	Student(){
		objectCount++;
	}
};
int Student::objectCount = 0;
int main(void)
{
Student s1;
Student s2;
Student s3;
cout<<"total object= "<<Student::objectCount<<endl;
return 0;
}
