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

    Complex operator+(Complex x)
    {
        return Complex(x.r + r, x.i + i);
    }
    Complex operator-(Complex y)
    {
        return Complex(y.r - r, y.i - i);
    }
    Complex operator*(Complex m)
    {
        return Complex(m.r * r, m.i * i);
    }
};

void Complex::display()
{
    cout << r << "+" << i << "i";
}

int main()
{
    Complex a(5, 2);
    a.display();
    cout << endl;
    Complex b(7, 2);
    b.display();
    cout << endl;
    Complex c = a + b;
    c.display();
    cout << endl;
    Complex d = a * b;
    d.display();
    cout << endl;
    Complex e = a - b;
    e.display();
}
