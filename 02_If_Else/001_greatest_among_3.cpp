#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 3 Numbers:";
    cin>>a>>b>>c;
    if(a>b && a>c){
    cout<<"A is the largest : "<<a;
    }
    else if(b>c && b>a){
        cout<<"B is the largest : "<<b;
    
    } 
    else{
        cout<<"C is the largest : "<<c;
    }   
}