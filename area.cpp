#include <iostream>
using namespace std;

const double PI = 3.14159;

// Function to calculate the area of a square
int area(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
int  area(int length, int width) {
    return length * width;
}

// Function to calculate the area of a circle
int  area(int  radius, int  isCircle) {
    return PI * radius * radius;
}

int main() {
    int  side = 5.0;
    cout << "Area of square with side " << side << " = " << area(side) << endl;

    int  length = 10.0, width = 6.0;
    cout << "Area of rectangle with length " << length << " and width " << width << " = " << area(length, width) << endl;

    int  radius = 3.0;
    cout << "Area of circle with radius " << radius << " = " << area(radius, true) << endl;

    return 0;
}

