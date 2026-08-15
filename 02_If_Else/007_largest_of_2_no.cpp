#include<iostream>
using namespace std;
void larg(int a, int b){
    if (a>b){
        cout<<a<<" is Largest";
    }
    else if (a<b){
        cout<<b<<" is Largest";
    }
    else{
        cout<<"Both are equal";
    }
}

int main(){
    int p,q;
    cout<<"Enter the 2 numbers :";
    cin>>p>>q;
    larg(p,q);
    return 0;

}