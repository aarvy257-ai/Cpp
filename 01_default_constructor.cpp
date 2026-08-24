#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        rollNumber = 0;
        std::cout << "Default constructor called!\n";
    }

    void display() const {
        std::cout << "Name: " << name << ", Roll Number: " << rollNumber << "\n";
    }
};

int main() {
    Student s1;  // Calls default constructor
    s1.display();
    return 0;
}
