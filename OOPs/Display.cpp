#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    string email;
    string phone;
    void display()
    {
        cout << "Roll_No" << " " << rollNo << endl;
        cout << "Name" << " " << name << endl;
        cout << "email" << " " << email << endl;
        cout << "Phone No" << " " << phone << endl;
    }
    Student()
    {
        cout << "Constructor Called" << endl;
    }
    Student(int roll, string name, string email, string phone)
    {
        rollNo = roll;
        this->name = name;
        this->email = email;
        this->phone = phone;
    }
};

int main()
{
    Student s;
    s.rollNo = 1;
    s.name = "Shivom";
    s.email = "Shiv@123";
    s.phone = "9271815354";

    s.display();

    Student a(2, "Sayyed", "123@gmmal", "123456789");
    a.display();
    Student b = a;
    b.display();
}