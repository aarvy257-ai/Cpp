#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, result;

    cout << "Temperature Conversion\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your Choice (1-2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            result = (temp * 9.0 / 5.0) + 32;
            cout << temp << " C = " << result << " F" << endl;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            result = (temp - 32) * 5.0 / 9.0;
            cout << temp << " °F = " << result << " °C" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
