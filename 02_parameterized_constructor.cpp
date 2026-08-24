#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Parameterized Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
        std::cout << "Parameterized constructor called!\n";
    }

    double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle rect(10.5, 4.0); // Calls parameterized constructor
    std::cout << "Area of Rectangle: " << rect.calculateArea() << "\n";
    return 0;
}
