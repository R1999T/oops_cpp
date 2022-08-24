//check if the string is palindrome or not

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

int main()
{
    char str[20];
    cout<<"enter string: ";
    cin>>str;

    cout<<endl;

    if (check_palindrome(str, length_of_string(str)))
    {
        cout<<"string is palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    

    return 0;
}