#include<iostream>
using namespace std;

int main(){
    int choice;
    float radius , height;

    cout<<"Enter radius of cylinder: ";
    cin>>radius;
    cout<<"Enter Height of Cylinder: ";
    cin>>height;

    int circum=2*3.14*radius;
    int vol=3.14*(radius*radius)*height;
    cout<<"Circumference of Cylinder = "<<circum<<endl;
    cout<<"Volume of Cylinder = "<<vol<<endl;

    return 0;
}