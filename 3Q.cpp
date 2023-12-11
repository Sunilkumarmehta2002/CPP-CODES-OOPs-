#include <iostream>
#include <stdexcept>

void test(int m1, int m2, int m3, int m4, int m5) {
    int total = m1 + m2 + m3 + m4 + m5;
    if (total % 3 == 0) {
        throw 0;
    } else if (total % 5 == 0) {
        throw 0.0;
    } else if (total % 7 == 0) {
        throw 'Z';
    }
}

int main() {
    try {
        int m1, m2, m3, m4, m5;
        std::cout << "Enter marks for 5 subjects: ";
        std::cin >> m1 >> m2 >> m3 >> m4 >> m5;

        test(m1, m2, m3, m4, m5);
    } catch(int e) {
        std::cerr << "Exception caught: " << e << std::endl;
    } catch(double e) {
        std::cerr << "Exception caught: " << e << std::endl;
    } catch(char e) {
        std::cerr << "Exception caught: " << e << std::endl;
    }

    return 0;
}

