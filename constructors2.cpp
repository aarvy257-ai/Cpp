#include <iostream>
using namespace std;

class Complex {
    float x, y;

public:
    Complex() {}
    Complex(float a) { 
        x = y = a; 
    }
    Complex(float real, float img) {
        x = real; 
        y = img;
    }

    friend Complex sum(Complex C1, Complex C2);
    friend void show(Complex C);
};

Complex sum(Complex C1, Complex C2) {
    Complex C3;
    C3.x = C1.x + C2.x;
    C3.y = C1.y + C2.y;
    return C3;
}

void show(Complex C) {
    cout << C.x << " + j" << C.y << "\n";
}

int main() {
    Complex A(2.7, 3.5);
    Complex B(1.6);
    Complex C;

    C = sum(A, B);
    cout << "A = "; show(A);
    cout << "B = "; show(B);
    cout << "C = "; show(C);

    Complex P, Q, R;
    P = Complex(2.5, 3.9);
    Q = Complex(1.6, 2.5);
    R = sum(P, Q);

    cout << "\nP = "; show(P);
    cout << "\nQ = "; show(Q);
    cout << "\nR = "; show(R);

    return 0;
}