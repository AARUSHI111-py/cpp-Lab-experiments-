#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:

    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Function Overloading
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    void display(string msg)
    {
        cout << msg << real
             << " + " << imag << "i" << endl;
    }

    // Operator Overloading
    Complex operator +(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    Complex operator -(Complex c)
    {
        Complex temp;

        temp.real = real - c.real;
        temp.imag = imag - c.imag;

        return temp;
    }
};

int main()
{
    Complex c1(10, 5);
    Complex c2(4, 2);

    Complex c3, c4;

    cout << "--- FUNCTION OVERLOADING ---\n";

    c1.display();

    c1.display("Complex Number: ");

    cout << "\n--- OPERATOR OVERLOADING ---\n";

    c3 = c1 + c2;

    cout << "Addition: ";
    c3.display();

    c4 = c1 - c2;

    cout << "Subtraction: ";
    c4.display();

    return 0;
}
