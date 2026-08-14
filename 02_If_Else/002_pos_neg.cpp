#include<iostream>
using namespace std;

int main(){
    float a ;
    cout<<"Enter the number : ";
    cin>>a;
    if (a>0){
        cout<<"Entered number is positive";
        cin>>a;
    }
    else if(a<0){
        cout<<"Entered number is Negative : "<<a;
    }
    else{
        cout<<"Entered number is ZERO.";
    }
}