#include<iostream>
using namespace std;
int main(){
    float principal, rate , time, si;
    cout<<"Enter the Principal amount:";
    cin>>principal;
    cout<<"Enter the rate of intrest:";
    cin>>rate;
    cout<<"Enter the time period(In years):";
    cin>>time;
    si=(principal*rate*time)/100;
    cout<<"The Simple Intrest is :"<<si;
    return 0;
}