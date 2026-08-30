#include<iostream>
using namespace std;
int main(){
    int choice,year;
    cout<<"Enter the month(1-12): ";
    cin>>choice;
    
    
    switch(choice){
        case 1:cout<<"January has 31 days"; break;
        case 2:cout<<"Enter Year: ";
                    cin>>year;
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                     cout << "February has 29 days (Leap Year)";
                else
                     cout << "February has 28 days";
                    break;
        case 3:cout<<"March has 31 days."; break;
        case 4: cout<<"April has 30 days."; break;
        case 5: cout<<"May has 31 days."; break;
        case 6: cout<<"June has 30 days."; break;
        case 7: cout<<"July has 31 days."; break;
        case 8: cout<<"August has 31 days."; break;
        case 9: cout<<"September has 30 days."; break;
        case 10: cout<<"October has 31 days."; break;
        case 11:cout<<"November has 30 days."; break;
        case 12: cout<<"December has 31 days.";break;
        default: cout<<"Invalid Choice !!";

    }
    return 0;
}