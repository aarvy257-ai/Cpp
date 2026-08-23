#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter Cost Price: ";
    cin >> a;
    cout << "Enter Selling Price: ";
    cin >> b;
    if (b > a) {
        cout << "Profit = " << b - a << endl;
    }
    else if (b < a) {
        cout << "Loss = " << a - b << endl;
    }
    else {
        cout << "No Profit, No Loss" << endl;
    }

    return 0;
}
