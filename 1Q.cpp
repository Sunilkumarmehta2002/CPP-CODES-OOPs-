#include <iostream>
#include <stdexcept>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    try {
        int num;
        std::cout << "Enter an integer: ";
        std::cin >> num;

        if (isPrime(num)) {
            throw std::runtime_error("prime input caused an exception");
        }
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

