// return maximum array character
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

char return_maximum_occured_char(string s)
{
    int arr[26] = {0};

    // 1. create an array of ount of characters
    for (int i = 0; i < s.length(); i++)
    {
        // // forlowercase_only
        // int counter = 0;
        // counter = s[i] - 'a';
        // arr[counter]++;
        int counter = 0;
        if (s[i]>='a' && s[i]<='z')
        {
            counter = s[i] - 'a';
            arr[counter]++;
        }
        else
        {
            counter = s[i] - 'A';
            arr[counter]++;
        }
        
        
    }

    int maximum = -1;
    int ans = 0; // this will store the position of maximum character
    for (int i = 0; i < 26; i++)
    {
        if (maximum < arr[i])
        {
            ans = i;
            maximum = arr[i];
        }
    }

    return 'a' + ans;
}

int main()
{
    string s = "ddmMmmyyY";

    cout<<return_maximum_occured_char(s);

    return 0;
}