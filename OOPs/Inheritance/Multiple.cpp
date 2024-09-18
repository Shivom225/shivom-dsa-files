#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string adhar_no;

public:
    string name;
    string email;
};

class Student : public Person
{
public:
    char div;
    int std;
    int roll;
    Student(string name, string email, char div, int std, int roll, string adhar_no)
    {
        this->name = name;
        this->email = email;

        this->div = div;
        this->std = std;
        this->roll = roll;
        this->adhar_no = adhar_no;
    }
    Student() {}
    void display()
    {
        cout << name << endl;
        cout << email << endl;
        cout << div << endl;
        cout << std << endl;
        cout << roll << endl;
        cout << adhar_no << endl;
    }
};

class Teacher : public Student
{

public:
    string id;
    int sal;
    Teacher(string name, string email, int roll, int std, string id, int sal)
    {
        this->name = name;
        this->email = email;
        this->roll = roll;
        this->std = std;
        this->id = id;
        this->sal = sal;
    }
    void display()
    {
        cout << name << endl;
        cout << email << endl;
        cout << std << endl;
        cout << roll << endl;
        cout << id << endl;
        cout << sal << endl;
    }
};

int main()
{
    Student S("Shivom", "SHoi123", 'D', 9, 53, "123456");
    S.display();
    Teacher T("Bhak", "asnh", 1, 4, "123", 1);
    T.display();
}