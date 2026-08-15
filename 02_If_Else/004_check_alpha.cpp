#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character to check for alphabet : ";
    cin>>ch;
    if((ch>='a' and ch<='z') or ( ch>='A' and ch<='Z')){
        cout<<ch<<" is a ALPHABET";
    }
    else if(ch>=1 or ch<=9){
        cout<<ch<<" is not a ALPHABET";
    }
    else{
        cout<<ch<<" is not a ALPHABET";
    }
}