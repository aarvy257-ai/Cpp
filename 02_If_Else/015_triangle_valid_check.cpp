#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the angles of variable: ";
    cin>>a>>b>>c;
    if(a+b+c==180){
        cout<<"Valid triagle";
    }
    else{
        cout<<"Invalid Triangle";
    }
    return 0;
}