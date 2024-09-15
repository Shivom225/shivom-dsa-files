#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    string email;
    string phone;

    void display()
    {
        cout << "Roll_No" << " " << roll << endl;
        cout << "Name" << " " << name << endl;
        cout << "email" << " " << email << endl;
        cout << "Phone No" << " " << phone << endl;
    }
    Student() {};

    void set()
    {
        cout << "Enter Name" << endl;
        cin >> name;
        cout << "Enter Roll" << endl;
        cin >> roll;
        cout << "Enter email" << endl;
        cin >> email;
        cout << "Enter Phone" << endl;
        cin >> phone;
    }
};
int main()
{
    Student classA[2];
    for (int i = 0; i < 2; i++)
    {
        classA[i].set();
    }
    for (int i = 0; i < 2; i++)
    {
        classA[i].display();
    }
}