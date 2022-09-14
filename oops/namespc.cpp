#include <iostream>
//using namespace std;
using std::cout;
using std::endl;
using std::string;


namespace namespace1
{
    int age = 2;
    string name = "raghav";
}

namespace namespace2
{
    int age = 3;
}

int main()
{

    cout << namespace1::age << endl;
    
    cout << namespace2::age << endl;
    cout << namespace1::name << endl;
    
    


    return 0;
}

/*
There will be conflict if we create two or more variable with same name.

<namespaces> helps us to resolve such conflicts, we specify the address of different namespace

//why using std namespace bad;

it means we are accessing all the parameters present in sid namespace
if we include only the required then it will save space.


*/