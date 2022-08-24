// write a program to convert decimal to binary equivalent number


#include<iostream>
using namespace std;

//do it without using array
void decimal_to_binary(int n){
    while (n>0)
    {
        
    }
    
}

int main(){

    int n;
    cin>>n;
    int arr[10];
    int i = 0;
    
    while (n>0)
    {
        arr[i++] = n%2;
        n=n/2;
    }
    for ( i = i -1 ; i >= 0; i--)
    {
        cout<<arr[i];
    }
    

    return 0;
}