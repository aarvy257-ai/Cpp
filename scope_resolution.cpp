// #include <iostream>
// using namespace std;
// int x = 3;
// int main()
// {
//     int x = 10;
//     cout << ::x;
//     return 0;
// }

#include <iostream>
using namespace std;
class A
{
public:
    static int x;
};
int A ::x = 10;
int main()
{
    cout << A ::x;
    return 0;
}