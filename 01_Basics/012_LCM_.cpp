#include<iostream>
using namespace std;
int main(){
    int a,b, result;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    result = (a>b) ? a:b;
    while (true){
        if (result%a==0 && result%b==0){
            cout<<"LCM of "<<a<<" and "<<b<<" is "<<result;
            break;
        }
        result++;
    }
}