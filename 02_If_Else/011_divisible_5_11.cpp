#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number to check divisible by 5 or 11: ";
    cin >> a;

    if(cin.fail()){   
        cout << "Enter a valid integer";
    }
    else if(a % 5 == 0 && a % 11 == 0){
        cout << "Divisible by both 5 and 11";
    }
    else if(a % 5 == 0){
        cout << "Divisible by 5";
    }
    else if(a % 11 == 0){
        cout << "Divisible by 11";
    }
    else{
        cout << "Not divisible by 5 or 11";
    }
    return 0;
}
