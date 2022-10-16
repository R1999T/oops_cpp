/*
abstraction:
1. we hide complex details or logics in the background from the user
2. It should have at least one virtual function
3. the pure virtual function implementation must have
*/

#include <iostream>
using namespace std;

class smartphone
{
public:
    virtual void take_a_selfie() = 0; // implementation in derived class  
    virtual void make_a_call() = 0;
};

class android : public smartphone
{
public:
    void take_a_selfie()
    {
        cout << "  android took a selfie :)";
    }
    void make_a_call(){
        cout<<"  android call....";
    }
};

class iphone : public smartphone {
    public: 
    void take_a_selfie()
    {
        cout << "  iphone took a selfie :)";
    }
    void make_a_call(){
        cout<<"  iphone call....";
    }
};


int main()
{

    smartphone *s1 = new android();
    s1->take_a_selfie(); // when object is a pointer we use -> to access the method of a class
    s1->make_a_call();
    cout<<endl;
    smartphone *s2 = new iphone();
    s2->take_a_selfie();
    s2->make_a_call();

    return 0;
}