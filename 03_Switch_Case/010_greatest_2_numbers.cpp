#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the 2 numbers: ";
    cin>>a>>b;
    switch(a>b){
        case 1: cout<<a<<" is Greatest"; break;
        default:
        case 0:
        switch(a==b){
            case 1:cout<<a<<" AND "<<b<<" both are EQUAL";break;
            case 2:cout<<b<<" is Greatest";
                    }

                }
return 0;
            }