#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    float gpa;

    Student(string s, int r, float g)
    {
        name = s ;
        roll = r ;
        gpa = g ;
    }
};
int main()
{
    Student s1("Aarvy", 6, 8);
    cout << s1.name << s1.gpa << s1.roll;
    return 0;
}