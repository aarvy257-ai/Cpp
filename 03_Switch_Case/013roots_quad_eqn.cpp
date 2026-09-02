#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter coefficients of Quadratic Equation (a, b, c): ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Not a quadratic equation." << endl;  
        return 0;
    }

    float dis = b * b - 4 * a * c;
    int choice;

    if (dis > 0)
        choice = 1;
    else if (dis == 0)
        choice = 2;
    else
        choice = 3;

    switch (choice) {
        case 1: {
            float r1 = (-b + sqrt(dis)) / (2 * a);
            float r2 = (-b - sqrt(dis)) / (2 * a);
            cout << "Roots are real and distinct: " << r1 << " , " << r2 << endl;
            break;
        }
        case 2: {
            float root = -b / (2 * a);
            cout << "Roots are real and equal: " << root << endl;
            break;
        }
        case 3: {
            float real = -b / (2 * a);
            float img = sqrt(-dis) / (2 * a);
            cout << "Roots are complex: " << real << " + " << img << "i , "
                 << real << " - " << img << "i" << endl;
            break;
        }
        default:
            cout << "Error in calculation." << endl;
    }

    return 0;
}
