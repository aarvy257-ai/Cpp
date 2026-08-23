#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    int D;
    cout<<"ax^2 + bx + c"<<endl;
    
    cout<<"Enter a:";
    cin>>a;
    
    cout<<"Enter b:";
    cin>>b;
    
    cout<<"Enter c:";
    cin>>c;

    D= b*b - 4*a*c;
if (D > 0) {
        double root1 = (-b + sqrt(D)) / (2*a);
        double root2 = (-b - sqrt(D)) / (2*a);
        cout << "Two distinct real roots: " << root1 << " and " << root2 << endl;
    } else if (D == 0) {
        double root = -b / (2.0*a);
        cout << "One real root: " << root << endl;
    } else {
        cout << "Complex roots exist." << endl;
    }

    return 0;

}