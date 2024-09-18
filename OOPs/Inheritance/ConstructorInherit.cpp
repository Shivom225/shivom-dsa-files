#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    string email;
    Person(string name, string email)
    {
        this->email = email;
        this->name = name;
    }
};

class Student : public Person
{
public:
    char div;
    int std;
    int roll;
    Student(string name, string email, char div, int std, int roll) : Person(name, email)
    {
        this->div = div;
        this->std = std;
        this->roll = roll;
    }
    void display()
    {
        cout << name << endl;
        cout << email << endl;
        cout << div << endl;
        cout << std << endl;
        cout << roll << endl;
    }
};

int main()
{
    Student S("Shivom", "SHoi123", 'D', 9, 53);
    S.display();
}