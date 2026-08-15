#include <iostream>
using namespace std;

void date(int d, int m, int y) {
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12 && y >= 1990 && y <= 2026) {
        cout << "Correct date" << endl;
    }
    else {
        cout << "Invalid Date" << endl;
    }
}

int main() {
    int day, month, year;
    cout << "Enter date (dd mm yyyy): ";
    cin >> day >> month >> year;
    date(day, month, year);   
    return 0;
}
