#include<iostream>
using namespace std;
int main(){
    string ch,result;
    cout<<"Enter a string :";
    cin>>ch;
    

    for(int i=0;i<ch.length();i++){
        switch(ch[i]){
            case 'a': case 'e': case 'i' : case 'o' : case 'u':
            case 'A': case 'E': case 'I' : case 'O' : case 'U':
                break;

            default:
                result+=ch[i];
    }
}
 cout << "String without vowels: " << result << endl;
    return 0;
}