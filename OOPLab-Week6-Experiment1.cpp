#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double realPart;
    double imaginaryPart;

public:
    ComplexNumber() {
        realPart = 0;
        imaginaryPart = 0;
    }

    ComplexNumber(double r, double i) {
        realPart = r;
        imaginaryPart = i;
    }

    ComplexNumber add(const ComplexNumber& c) const {
        return ComplexNumber(realPart + c.realPart, imaginaryPart + c.imaginaryPart);
    }

    ComplexNumber sub(const ComplexNumber& c) const {
        return ComplexNumber(realPart - c.realPart, imaginaryPart - c.imaginaryPart);
    }

    ComplexNumber mul(const ComplexNumber& c) const {
        double r = realPart * c.realPart - imaginaryPart * c.imaginaryPart;
        double i = realPart * c.imaginaryPart + imaginaryPart * c.realPart;
        return ComplexNumber(r, i);
    }

    void print() const {
        if (imaginaryPart >= 0)
            cout << realPart << "+" << imaginaryPart << "i" << endl;
        else
            cout << realPart << "" << imaginaryPart << "i" << endl;
    }

    void input() {
        printf("Enter complex number in format (e.g., 3+2i): ");
        char sign;
        scanf_s("%lf%c%lfi", &realPart, &sign, 1, &imaginaryPart); // read real, sign, imaginary
       
    }
};

int main() {
    ComplexNumber c1, c2;
    c1.input();
    c2.input();

    cout << "c1 = "; c1.print();
    cout << "c2 = "; c2.print();

    ComplexNumber sum = c1.add(c2);
    cout << "Sum: "; sum.print();

    ComplexNumber diff = c1.sub(c2);
    cout << "Difference: "; diff.print();

    ComplexNumber prod = c1.mul(c2);
    cout << "Product: "; prod.print();

    return 0;
}
