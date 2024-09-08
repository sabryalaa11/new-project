#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>

using namespace std;

class Calculator
{
private:
    static const double pi;
    static const double e;

public:
    static double add(double a, double b)
    {
        return a + b;
    }
    static double subtract(double a, double b)
    {
        return a - b;
    }
    static double multiply(double a, double b)
    {
        return a * b;
    }
    static double divide(double a, double b)
    {
        if (b != 0)
        {
            return a / b;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
    }

    static double sqr(double a)
    {               // حساب الجذر التربيعي
        if (a >= 0) // لان مينفعش اللي تحت الجذر يكون سالب
        {
            return sqrt(a); // sqrt: دا بتحسب الجذر التربيعي جاهز من cmath
        }
        else
        {
            cout << "Error: The number is negative." << endl;
            return -1; // ان فيه مشكله ف القيمه اللي ادخلت
        }
    }

    static double lo(double a)
    {
        if (a > 0) // لازم يكون الرقم اكبر من صفر
        {
            return log(a); // log: دا بتحسب اللوجارثم جاهزه من cmath
        }
        else
        {
            cout << "Error: The number is negative." << endl;
            return -1; // ان فيه مشكله ف القيمه اللي ادخلت
        }
    }
};
const double Calculator::pi = 3.14159;
const double Calculator::e = 2.71828;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double real = 0, double imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }
    void display() const
    {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }

    Complex operator+(const Complex &c) const
    {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(const Complex &c) const
    {
        return Complex(real - c.real, imag - c.imag);
    }
    Complex operator*(const Complex &c) const
    {
        return Complex(                    // الاعداد المركبه لها حاله خاصه ف حاله الضرب
            real * c.real - imag * c.imag, // real part
            real * c.imag + imag * c.real  // imag part
        );
    }
    Complex operator/(const Complex &c) const
    {
        double denominator = c.real * c.real + c.imag * c.imag;
        if (denominator == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return Complex(0, 0);
        }
        return Complex(                      // الاعداد المركبه لها حاله خاصه ف حاله القسمه
            (real * c.real + imag * c.imag), // denominator real
            (imag * c.real - real * c.imag)  // denumerator imag
        );
    }
    friend ostream &operator<<(ostream &os, const Complex &c);
};
ostream &operator<<(ostream &os, const Complex &c)
{
    os << c.real << " + " << c.imag << "i";
    return os;
}

int main()
{
    Calculator calc;
    Complex c1(3, 4);
    Complex c2(2, 1);

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << endl;
    cout << "Addition: " << Calculator::add(5, 3) << endl;
    cout << "Subtraction: " << Calculator::subtract(5, 3) << endl;
    cout << "Multiplication: " << Calculator::multiply(5, 3) << endl;
    cout << "Division: " << Calculator::divide(5, 3) << endl;

    return 0;
}
