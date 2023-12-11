#include <iostream>
using namespace std;

class vehicle{
    public:
        int mileage;
        int price;
        void add_Data()
        {
            cin >> mileage;
            cin >> price;
        }
        void display()
        {
            cout << "Mileage : " << mileage << endl;
            cout << "Price : Rs" << price << endl;
        }
};

class Car : public vehicle{
    public:
        int years;
        int Seating_capacity;
        void add_Data()
        {
            cin >> years;
            cin >> Seating_capacity;
        }
        void display()
        {
            cout << "Warranty Years : " << years << " years" << endl;
            cout << "Seating Capacity : " << Seating_capacity << endl;
        }
};

class Bike : public vehicle{
    public :
        int cylinders;
        int gears;
        void add_Data()
        {
            cin >> cylinders;
            cin >> gears;
        }
        void display()
        {
            cout << "Cylinders : " << cylinders << endl;
            cout << "Gears : " << gears << endl;
        }
};

class Audi : public Car{
    public:
        string model_type;
        void add_Data()
        {
            cin >> model_type;
        }
        void display()
        {
            cout << "Model Type : " << model_type << endl;
        }
};
 
class Ford : public Car{
    public:
        string model_type;
        void add_Data()
        {
            cin >> model_type;
        }
        void display()
        {
            cout << "Model Type : " << model_type << endl;
        }
};
class Bajaj : public Bike{
    public:
        string make_type;
        void add_Data()
        {
            cin >> make_type;
        }
        void display()
        {
            cout << "Make Type : " << make_type << endl;
        }
};
class TVS : public Bike{
    public:
        string make_type;
        void add_Data()
        {
            cin >> make_type;
        }
        void display()
        {
            cout << "Make Type : " << make_type << endl;
        }
};

int main()
{
    Audi audi;
    Ford ford;
    Bajaj bajaj;
    TVS tvs;

    audi.vehicle::add_Data();
    audi.Car::add_Data();
    audi.add_Data();
    cout << "AUDI" << endl;
    audi.display();
    audi.vehicle::display();
    audi.Car::display();

    ford.vehicle::add_Data();
    ford.Car::add_Data();
    ford.add_Data();
    cout << "Ford" << endl;
    ford.display();
    ford.vehicle::display();
    ford.Car::display();

    bajaj.vehicle::add_Data();
    bajaj.Bike::add_Data();
    bajaj.add_Data();
    cout << "Bajaj" << endl;
    bajaj.display();
    bajaj.vehicle::display();
    bajaj.Bike::display();
    
    tvs.vehicle::add_Data();
    tvs.Bike::add_Data();
    tvs.add_Data();
    cout << "Tvs" << endl;
    tvs.display();
    tvs.vehicle::display();
    tvs.Bike::display();

    return 0;
}
