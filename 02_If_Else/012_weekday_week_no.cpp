#include <iostream>
using namespace std;

void week(int a) {
    switch (a) {
        case 1: cout << "Monday";
        break;
        case 2: cout << "Tuesday";
        break;
        case 3: cout << "Wednesday";
        break;
        case 4: cout << "Thursday";
        break;
        case 5: cout << "Friday";
        break;
        case 6: cout << "Saturday";
        break;
        case 7: cout << "Sunday";
        break;
        default: cout << "Invalid week number!";
    }
}

int main() {
    int ch;
    cout << "Enter a week number (1-7): ";
    cin >> ch;
    week(ch);
    return 0;
}
