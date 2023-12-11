#include <iostream>
#include <stdexcept>

void check(int a, int b) {
    if ((a + b) * (a + b) % 2 != 0) {
        throw std::runtime_error("Invalid inputs caused an exception");
    }
}

int main() {
    try {
        int x, y;
        std::cout << "Enter two integers: ";
        std::cin >> x >> y;

        check(x, y);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

