//reverse a string
#include<iostream>
using namespace std;

//length of string is required
int getlength(char arr[]){
    int length = 0;
    for  (int i = 0; arr[i] !='\0'; i++)   //checking the content of array if it is not equal to null
    {
        length++;
    }
    return length;
}

//to reverse a string
void reverse_string(char arr[], int length){
    int start = 0;
    int end = length - 1; //last character is null so n -1
    while (start<end)
    {
        swap(arr[start++], arr[end--]);
    }
    
    
}


int main() {
    char name[20];


    cout<<"enter your name: ";
    cin>>name;

    cout<<endl;

    cout<<"the name you entered: ";
    cout<<name;

    cout<<endl;

    cout<<"the length of your name is: ";
    cout<<getlength(name);

    cout<<endl;
    cout<<"the reverse od the string is: ";
    reverse_string(name, getlength(name));
    cout<<name;


    return 0;
}