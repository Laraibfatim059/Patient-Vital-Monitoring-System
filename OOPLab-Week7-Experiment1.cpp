#include <iostream>
using namespace std;

class Complex
{
private:
    double rp;
    double ip;

public:
    Complex(double real = 0, double imag = 0)
    {
        rp = real;
        ip = imag;
    }
    void input() {
        printf("Enter real and part complex part of number in format (e.g., 3+2i): ");
        char sign;
        scanf_s("%lf%c%lfi", &rp, &sign, 1, &ip); // read real, sign, imaginary

    }

    Complex operator+(const Complex& c)
    {
        return Complex(rp + c.rp, ip + c.ip);
    }

    Complex operator-(const Complex& c)
    {
        return Complex(rp - c.rp, ip - c.ip);
    }

    Complex operator*(const Complex& c)
    {
        return Complex((rp * c.rp) - (ip * c.ip),
            (rp * c.ip) + (ip * c.rp));
    }

    Complex& operator=(const Complex& c)
    {
        if (this != &c)
        {
            rp = c.rp;
            ip = c.ip;
        }
        return *this;
    }

    void print()
    {
        cout << rp;

        if (ip >= 0)
            cout << " + " << ip << "i";
        else
            cout << " - " << -ip << "i";

        cout << endl;
    }
};

int main()
{
    

    Complex c1, c2;
    c1.input();
    c2.input();
    Complex result;

    result = c1 - c2;
    cout << "\nc1 - c2 = ";
    result.print();

    result = c1 + c2;
    cout << "c1 + c2 = ";
    result.print();

    result = c1 * c2;
    cout << "c1 * c2 = ";
    result.print();

    return 0;
}
