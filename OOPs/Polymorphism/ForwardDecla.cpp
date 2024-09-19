#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int r;
    int i;
    Complex(int r, int i)
    {
        this->r = r;
        this->i = i;
    }

    void display();
};

void Complex::display()
{
    cout << r << "+" << i << "i";
}

int main()
{
    Complex a(5, 2);
    a.display();
    Complex b(7, 2);
    b.display();
}