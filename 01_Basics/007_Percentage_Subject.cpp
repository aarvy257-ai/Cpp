#include<iostream>
using namespace std;
int main(){

    float s1 , s2 , s3, s4, s5, total, percent;
    cout<<"Enter the marks of 5 subjects:";
    cin>>s1>>s2>>s3>>s4>>s5;
    total = s1+s2+s3+s4+s5;
    percent = total /5;
    cout<<"The Percentage is :"<<percent<<"%";
    return 0;
}
