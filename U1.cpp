#include <iostream>
using namespace std;
{
	public:
	void start(){
		cout>>"car start";
		
	}
};
class car {
	public:
		car():engine(new Engine()){
		}
		void startCar(){engine->start();
		}
		
};
