#include <iostream>
#include <sstream>   // for stringstream
using namespace std;

int main() {
    string fullName;
    cout << "Enter Full Name: ";
    getline(cin, fullName);   // read full line including spaces

    stringstream ss(fullName);
    string word;
    bool firstWord = true;

    cout << "Abbreviated name is: ";
    while (ss >> word) {
        if (ss.peek() != EOF) {
            cout << word[0] << ".";
        } else {
            cout << word;
        }
    }
    cout << endl;
    return 0;
}
