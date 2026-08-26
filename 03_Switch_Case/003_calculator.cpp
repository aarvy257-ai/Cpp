#include<iostream>
using namespace std;
int main(){
    int choice;
    float a,b,result;
    cout<<"\t calculator \t"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Enter your choice(1-4) : ";
    cin>>choice;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    
    switch(choice){
        case 1: 
            result=a+b;
            cout<<"Addition = "<<result;
            break;

        case 2: 
            result=a-b;
            cout<<"Subtraction = "<<result;
            break;

        case 3:
            result=a*b;
            cout<<"Multiplication = "<<result;
            break;

        case 4:
            if(b==0){
                cout<<"Not divisible by zero";
            }
            else{
                result=a/b;
                cout<<"Division = "<<result;
            }
            break;
            
        default:
            cout<<"Invalid choice!!";
    }
    return 0;
}
