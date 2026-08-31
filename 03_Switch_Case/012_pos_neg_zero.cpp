#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int choice = (num > 0) ? 1 : (num < 0 ? 2 : 0);

    switch(choice) {
        case 1:
            cout << "POSITIVE";
            break;
        case 2:
            cout << "NEGATIVE";
            break;
        case 0:
            cout << "ZERO";
            break;
        default:
            cout << "Invalid input";
    }

    return 0;
}
