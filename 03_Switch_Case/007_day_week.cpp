#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"\t Week Days \t"<<endl;
    cout<<"1. Monday"<<endl;
    cout<<"2. Tuesday"<<endl;
    cout<<"3. Wednesday"<<endl;
    cout<<"4. Thrusday"<<endl;
    cout<<"5. Friday"<<endl;
    cout<<"6. Saturday"<<endl;
    cout<<"7. Sunday"<<endl;
    cout<<"Enter your choice(1-7): ";
    cin>>choice;

switch(choice){
        case 1: cout << "MONDAY"; break;
        case 2: cout << "TUESDAY"; break;
        case 3: cout << "WEDNESDAY"; break;
        case 4: cout << "THURSDAY"; break;
        case 5: cout << "FRIDAY"; break;
        case 6: cout << "SATURDAY"; break;
        case 7: cout << "SUNDAY"; break;
        default: cout << "Invalid choice!";
}

return 0;

}