/*
friend function: 
            1. are those functions which have the right to access the PRIVATE
               data members of the CLASS even though they are NOT DEFINED inside
               the class.
            2. prototype of the friend function is necessary

properties:
    1. not in the scope of the class
    2. because of above point, it cannot be called object of class
    3. friend function can be INVOKED  WITHOUT THE HELP OF ANY OBJECT
    4. usually contains object as arguments
    5. can be declared under the public or private access modifiers,it will not make any difference
    6. it cannot acess the memebrs directly by there names, it needs(object_name.member_name) to access any member

*/

#include <iostream>
using namespace std;


// example 2 : passing object as function argument
class complex
{
    int a;
    int b;
    //prototype of friend function
    friend complex set_data_by_sum(complex v1, complex v2);

public:
    void set_data(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

        
    
    void print_result(){
        cout<<"sum of complex number is: "<<a<<" + "<<b<<"i"<<endl;
    };
};

complex set_data_by_sum(complex one,complex two){
    complex result;
    int a = one.a + two.a;
    int b = one.b + two.b;

    result.set_data(a,b);

    return result;
}





int main()
{

    
    //3. passing object as function argument
    complex one;
    complex two;
    complex sum;

    one.set_data(1,2);
    two.set_data(3,4);

    sum = set_data_by_sum(one,two);
    sum.print_result();
    
    return 0;
}