#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a Character :";
    cin>>ch;
    if(ch>='a' and ch<='z'){
        cout<<ch<< " : "<<"LOWERCASE";
    }
    else if(ch<='Z' and ch>='A'){
        cout<<ch<<" : "<<"UPPERCASE";
    }
    else if (ch<='9' and ch>='1'){
        cout<<ch<<" : "<<"DIGIT";
    }
    else{
        cout<<ch<<":"<<"SPECIAL CHARACTER";
    }
    return 0;
}