#include<iostream>
using namespace std;

int main() {
    int choice;
    float marks;

    cout << "Enter Marks: ";
    cin >> marks;

    if(marks >= 90 && marks <= 100)
        choice = 1;
    else if(marks >= 80)
        choice = 2;
    else if(marks >= 70)
        choice = 3;
    else if(marks >= 60)
        choice = 4;
    else if(marks >= 50)
        choice = 5;
    else if(marks >= 0)
        choice = 6;
    else
        choice = 7;

    switch(choice) {
        case 1:
            cout << "Grade = A+" << endl;
            break;
        case 2:
            cout << "Grade = A" << endl;
            break;
        case 3:
            cout << "Grade = B+" << endl;
            break;
        case 4:
            cout << "Grade = B" << endl;
            break;
        case 5:
            cout << "Grade = C" << endl;
            break;
        case 6:
            cout << "Grade = F (Fail)" << endl;
            break;
        default:
            cout << "Invalid Marks Entered!" << endl;
    }

    return 0;
}
