// check for valid palindrome in a sentence
#include <iostream>
#include <string.h>
using namespace std;

void to_lowercase(string &s)
{

    int size = s.size() - 1;
    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }
}

bool check_palindrome(string &s){

    int start = 0;
    int end = s.size()-1;
    while (start < end)
    {
        if (!((s[start] >='a' && s[start] <='z')  || (s[start] >= '0' && s[start]<='9'))) //for special charater
        {
            start++;
            continue;
        }
        if (!((s[end] >='a' && s[end] <='z')  || (s[end] >= '0' && s[end]<='9'))) //for special charater
        {
            end--;
            continue;
        }
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            return 0;
        }  
    }
    return 1;
    
}




int main()
{

    string s = "A MN, a plan, a CANAL: Panama";

    // change the case of string
    to_lowercase(s);

    if (check_palindrome(s))
    {
        cout<<"is palindrome";
    }
    else
    {
        cout<<"is not palindrome";
    }
    
    

    return 0;
}