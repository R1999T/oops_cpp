#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // by default value id zero
public:
    void setData(void)
    {
        cout << "enter the Id: " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "employee Id is: " << id << " employee number is: " << count << endl;
    }
    static void getCount(void);
};

// static variable is written outside the classs. why?
int Employee ::count;//you can initialize the value here NOT IN THE CLASS 
//static funtion definition
void Employee::getCount(void){
    cout<<"total count is: "<<count;
}

int main()
{
    Employee raghav, krish, rohit;
    raghav.setData();
    raghav.getData();

    krish.setData();
    krish.getData();

    rohit.setData();
    rohit.getData();
    Employee::getCount();

    // cout<<"total employees: "<<;
    return 0;
}