#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Alphabet: " ;
    cin>>ch;
    switch(ch){
       
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<<ch<<" is a VOWEL"; break;
        default:
            if(ch<='z' && ch>='a'){
                cout<<ch<<" is a CONSONANT"; 
            }
            else{
                cout<<ch<<" is not an ALPHABET ...!";
            }
    }
    return 0;
}