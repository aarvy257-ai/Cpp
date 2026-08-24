#include <iostream>
using namespace std;

int main() {
    int choice,a;
    

    cout << "Find The Day\n";
    cout << "1.MONDAY\n";
    cout << "2.TUESDAY\n";
    cout << "3.WEDNESDAY\n";
    cout << "4.THRUSDAY\n";
    cout << "5.FRIDAY\n";
    cout << "6.SATURDAY\n";
    cout << "7.SUNDAY\n";
    
    cout << "Enter your Choice (1-7): ";
    cin >> choice;

    switch (choice){
        case 1: cout<<"MONDAY";break;
        case 2: cout<<"TUESDAY";break;
        case 3: cout<<"WEDNESDAY";break;
        case 4: cout<<"THRUSDAY";break;
        case 5: cout<<"FRIDAY";break;
        case 6: cout<<"SATURDAY";break;
        case 7: cout<<"SUNDAY";break;
        default:
            cout<<"Invalid Choice !!";   
    }

}

    