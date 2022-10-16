/*
Relationship between Virtual functions, 
pure virtual functions and abstract classes 
in oops
Purpose of virtual function to use runtime polymorphism

pure virtual function: pure virtual function is not used to perform any task. It only servers as a placeholder.
It is declared in the base class;
*/

#include<iostream>
using namespace std;


//So because there is pure virtual function in the below base class, it will become abstract class
//as by definItion (abstract class must have at least one virtual function)
class instrument {

    public:
    // virtual void make_sound(){
    //     cout<<"instrument playing....\n";
    // }
    //the below PURE VIRTUAL FUNCTION FORCES ALL THE DERIVED CLASS TO IMPLEMENT IT(DEFINE IT)
    virtual void make_sound() = 0;
};

class accordion: public instrument{
    public:
    void make_sound(){
        cout<<"Accordian playing....\n";
    }
};

class piano: public instrument{
    public:
    void make_sound(){
        cout<<"Piano playing....\n";
    }
};

int main(){

    //if we create object of the abstract class it will show error
    //pure virtual class does not have overrider
    //instrument i1;
    // i1.make_sound();
    // cout<<endl;

    //base class pointer used to refer derived class
    instrument *i2 = new accordion();
    i2->make_sound();


    instrument *i1 = new piano();
    i1->make_sound();


    return 0;
}