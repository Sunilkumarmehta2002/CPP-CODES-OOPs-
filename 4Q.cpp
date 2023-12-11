#include <iostream>
#include <stdexcept>

void Test1(int num) {
    if (num % 3 == 0) {
        throw num;
    }
}

int main() {
    try {
        int num;
        std::cout << "Enter an integer: ";
        std::cin >> num;

        Test1(num);
    } catch(int e) {
        std::cerr << "Caught exception: " << e << std::endl;
        if (e % 5 == 0) {
            std::cerr << "Problem" << std::endl;
        } else {
            std::cerr << "OK" << std::endl;
        }
    }

    return 0;
}

