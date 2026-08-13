#include<iostream>
using namespace std;
class car
{
public:
    string model;
    string color;
    int price;
    string type;

    car string(string a, string b, int c, string d)
    {
        model =a;
        price = c;
        color = b;
        type = d;

    }
}
void change(car &e)
{
    e.model = "AUDI";
    e.price = 6700000;
    e.color = "Z black"
}