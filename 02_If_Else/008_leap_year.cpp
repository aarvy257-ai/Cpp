#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a year to check for leap year: ";
    cin >> a;
    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) {
        cout << a << " is a Leap Year." << endl;
    }
    else {
        cout << a << " is NOT a Leap Year." << endl;
    }

    return 0;
}
