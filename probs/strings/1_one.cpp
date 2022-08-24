//find the length of a string
#include<iostream>
using namespace std;

int getlength(char arr[]){
    int length = 0;
    for  (int i = 0; arr[i] !='\0'; i++)   //checking the content of array if it is not equal to null
    {
        length++;
    }
    return length;
}

int main(){

    char name[20];


    cout<<"enter your name: ";
    cin>>name;

    cout<<endl;

    cout<<"the name you entered: ";
    cout<<name;

    cout<<endl;

    cout<<"the length of your name is: ";
    cout<<getlength(name);


    return 0;
}