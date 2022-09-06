// find and replace the occurance in the string

#include <iostream>
#include <string.h>

using namespace std;

// class find_and_replace
// {

// public:
//     string s;
//     string part;
//     string remove_occurances(string , string);
//     void str_input(void);
//     void part_input(void);
// };

// string find_and_replace ::remove_occurances(string s, string part)
// {
//     while (s.length() != 0 && s.find(part) < s.length())
//     {
//         s.erase(s.find(part), part.length());
//     }

//     return s;
// }

// void find_and_replace :: str_input(void){
//     cout<<"enter the string: ";
//     cin>>s;
// }

// void find_and_replace :: part_input(void){
//     cout<<"enter the part to be removed: ";
//     cin>>part;
// }

string remove_occurances(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main()
{

    string str = "mymymynameisraghavtiwarimy";
    string part = "my";

    string new_string = remove_occurances(str, part);

    cout << new_string;
    return 0;
}