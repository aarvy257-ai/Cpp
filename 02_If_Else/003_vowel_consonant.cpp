#include<iostream>

using namespace std;

int main(){
    char a;
    cout<<"Enter a character : ";
    cin>>a;
    if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u' or a=='A' or a=='E' or a=='I' or a=='O' or a=='U')
    {
        cout<<a<<" is a VOWEL";
    }
    else
    {
        cout<<a<<" is a CONSONANT";
    }
return 0;
}