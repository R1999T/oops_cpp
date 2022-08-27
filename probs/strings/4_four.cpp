// check for valid palindrome in a sentence
#include<iostream>
#include<string.h>
using namespace std;

class Solution
{

private:
    bool validate(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        return 0;
    }

    char to_lowercase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool check_palindrome(string s)
    {
        int start = 0;
        int end = s.length() - 1;
        while (start <= end)
        {
            if (s[start] != s[end])
            {
                return 0;
            }
            else
            {
                start++;
                end--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s)
    {
        // 1. removing unwanted characters
        string temp = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (validate(s[i]))
            {
                temp.push_back(s[i]);
            }
        }

        // 2. converting to lower case
        for (int i = 0; i < temp.length(); i++)
        {
            temp[i] = to_lowercase(temp[i]);
        }

        // 3. check for palindrome
        return check_palindrome(temp);
    }
};