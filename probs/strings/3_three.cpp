//check if the string is palindrome or not
//changing  uppercase to lower case  to solve the issue of different ASCII values for capital and small letter in a palindrome
#include <iostream>
using namespace std;

int length_of_string(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

bool check_palindrome(char arr[], int length){
    int start = 0;
    int end = length - 1;

    while (start< end)
    {
        if (arr[start] != arr[end])
        {
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
char change_case_UtoL(char ch){
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
    
}


int main()
{
    char str[20];
    cout<<"enter string: ";
    cin>>str;

    cout<<endl;

    // if (check_palindrome(str, length_of_string(str)))
    // {
    //     cout<<"string is palindrome";
    // }
    // else{
    //     cout<<"not a palindrome";
    // }
    

    //convert upper to lower case
    for (int i = 0; i < length_of_string(str); i++)
    {
        str[i] = change_case_UtoL(str[i]);
        
    }

    //check for palindrome the will work even if any letter present in capital and small
    if (check_palindrome(str, length_of_string(str)))
    {
        cout<<"string is palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    
    return 0;
}