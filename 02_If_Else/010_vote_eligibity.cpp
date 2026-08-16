#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter age: ";
    cin>>a;

    if(a >= 18){
        cout<<"Eligible to Vote";
    }
    else if(a >= 0 && a < 18){
        cout<<"Not Eligible to Vote";
    }
    else{
        cout<<"Enter valid age only";
    }
    return 0;
}
