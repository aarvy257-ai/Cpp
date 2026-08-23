#include <iostream>
using namespace std;

class Number
{
public:
    int a;
    int b;

    Number()
    {
        a = 10;
        b = 20;
    }

    void add()
    {
        cout << "Addition = " << a + b;
    }
};

int main()
{
    Number n;

    n.add();

    return 0;
}