#include <iostream>
using namespace std;

// example 1: passing object as array
class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "enter the id of employee: " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "the id of the employee is : " << id << endl;
    }
};

// example 2 : passing object as function argument
class complex
{
    int a;
    int b;

public:
    void set_data(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void set_data_by_sum(complex, complex);
        
    
    void print_result(){
        cout<<"sum of complex number is: "<<a<<" + "<<b<<"i"<<endl;
    };
};

void complex::set_data_by_sum(complex one,complex two){
    a = one.a + two.a;
    b = one.b + two.b;
}





int main()
{

    // 1.
    //  employee ram;
    //  ram.setId();
    //  ram.getId();

    // 2. object array way
    // employee record[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     record[i].setId();
    //     record[i].getId();
    // }

    //3. passing object as function argument
    complex one;
    complex two;
    complex sum;

    one.set_data(1,2);
    two.set_data(3,4);

    sum.set_data_by_sum(one,two);
    sum.print_result();

    

    


    return 0;
}