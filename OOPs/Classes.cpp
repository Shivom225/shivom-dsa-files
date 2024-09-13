#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    string colour;
    float height;
    float weight;
};

int main()
{
    Student a;
    a.name = "Shivom";
    a.age = 20;
    a.height = 6.2;
    a.weight = 50;

    Student b;
    b.name = "Sayyed";
    b.age = 21;
    b.height = 6.2;
    b.weight = 50;
    cout << a.name;
}