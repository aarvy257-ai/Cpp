#include <iostream>
using namespace std;
class car
{
public:
    string name;
    int model;
    int price;
    string type;

    car(string n, int p, int m)
    {
        name = n;
        price = p;
        model = m;
    }
};
void change(car &c)
{
    c.name = "Audi";
}
int main()
{
    car c1("BMW", 10000000, 2026);
    cout << c1.name << c1.price << c1.model;
    change(c1);
    cout << c1.name;
}