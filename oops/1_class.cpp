#include <bits/stdc++.h>
using namespace std;
// create a class having private variables and public function and return the values

class one_class
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    //declared function 1
    void getdata(void);
    

    // function overloading
    void sum(int a1, int b1, int c1)
    {
        int addition = a1 + b1 + c1;
        cout << addition << " type is: " << sizeof(addition)<<endl;
    }

    void sum(float a1, int b1, float c1)
    {
        int addition = a1 + b1 + c1;
        cout << addition << " type is: " << sizeof(addition)<<endl;
    }

    //decleared function 2 + function overloading
    void sum(int a1,float b1);
    void sum(double a1, double b1);
};

void one_class :: getdata(){
    cout<<"val1: "<<a<<endl;
    cout<<"val2: "<<b<<endl;
    cout<<"val3: "<<c<<endl;
    cout<<"val4: "<<d<<endl;
    cout<<"val5: "<<e<<endl;
}

void one_class :: sum(int a1, float b1){
    
        float addition = a1 + b1;
        cout << addition << " type is: " << sizeof(addition)<<endl;
}

void one_class :: sum(double a1, double b1){
    
        double addition = a1 + b1;
        cout << addition << " type is: " << sizeof(addition)<<endl;
}

int main()
{
    one_class random_class;
    random_class.d = 12;
    random_class.e = 15;
    random_class.setdata(1,6,43);
    random_class.getdata();

    cout<<"sums:"<<endl;
    random_class.sum(1,2,3);
    random_class.sum(1,2);
    random_class.sum(0.1f, 1, 2.34f);

    return 0;
}