#include<iostream>
#include<string.h>
using namespace std;

string remove_duplicates(string s1){

    //storing the no of charecters in an array
    // int arr1[26] = {0};
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     int index = s1[i] - 'a';
    //     arr1[index]++;
    // }

    string s2;
    for (int i = 0; i < 26; i++)
    {
        if (s1[i] == s1[i+1])
        {
            s2.push_back(s1[i]);
        }
        else{
            
            continue;
        }
    }
    
    return s2;
}



int main(){

    string test = "axxyyz";
    cout<<remove_duplicates(test);

    return 0;
}