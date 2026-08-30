#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    switch(a%2){
        case 0:cout<<a<<" is EVEN"; break;
        case 1:cout<<a<<" is ODD"; break; 
    }
    return 0;
}