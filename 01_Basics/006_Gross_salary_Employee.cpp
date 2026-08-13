#include<iostream>
using namespace std;
int main(){
    float houserent, waterbill, electricbill,basic_salary, grosssalary;
    cout<<"Enter the Basic Salary:";
    cin>>basic_salary;
    cout<<"Enter the House Rent:";
    cin>>houserent;
    cout<<"Enter the water bill:";
    cin>>waterbill;
    cout<<"Enter the electric bill:";
    cin>>electricbill;
    grosssalary = houserent + waterbill + electricbill+ basic_salary;
    cout<<"The Gross Salary is :"<<grosssalary;
    return 0;
}
