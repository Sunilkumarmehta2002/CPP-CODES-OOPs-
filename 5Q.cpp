#include <iostream>
#include <stdexcept>

class Checking {
private:
    int x;
public:
    void getdata() {
        std::cout << "Enter an integer: ";
        std::cin >> x;
        if (x % 2 == 0) {
            throw *this;
        }
    }

    void display() {
        std::cout << "Invalid" << std::endl;
    }
};

int main() {
    Checking obj;

    try {
        obj.getdata();
    } catch(const Checking& e) {
        e.display();
    }

    return 0;
}

