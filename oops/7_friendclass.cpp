/*
Friend Classes & Member Friend Functions in C++
25th lecture

if we have too many friend function LETS PUT THEM IN A CLASS
*/

#include <iostream>
using namespace std;

// FORWARD DECLARATION
class complex; // it will tell the compiler that the given class is present somewhere in the error

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    // int sum_real_comp(complex c1, complex c2) //compiler don't know c1.a and c2.a preent or not so we just define prototype here and function after that class created
    // {
    //     return (c1.a + c2.a);
    // }
    int sum_real_part(complex, complex);
    int sum_comp_part(complex, complex);
};

// example 2 : passing object as function argument
class complex
{
    int a;
    int b;
    // friend int calculator::sum_real_part(complex, complex);
    // friend int calculator::sum_comp_part(complex, complex);

    //alter: declare  the entire calculator class as friend
    friend class calculator;

public:
    void set_data(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void print_result()
    {
        cout << "sum of complex number is: " << a << " + " << b << "i" << endl;
    };
};

int calculator::sum_real_part(complex c1, complex c2)
{
    return (c1.a + c2.a);
}

int calculator::sum_comp_part(complex c1, complex c2)
{
    return (c1.b + c2.b);
}


int main()
{
    complex co1;
    complex co2;

    co1.set_data(1,2);
    co2.set_data(6,2);

    calculator calc;

    int real_sum = calc.sum_real_part(co1,co2);
    int comp_sum = calc.sum_comp_part(co1,co2);
    cout<<"the sum is: "<<real_sum<<" + "<<comp_sum<<"i";



    return 0;
}