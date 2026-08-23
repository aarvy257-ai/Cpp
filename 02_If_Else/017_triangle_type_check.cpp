#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides of triangle:";
    cin>>a>>b>>c;
    if(a == b && b == c){
        cout<<"Equilateral triangle.";
    }
    else if(a==b || a==c || b==c){
        cout<<"The triangle is Isosceles.";

    }
    else{
        cout<<"The triangle is Scalene";
    }
}