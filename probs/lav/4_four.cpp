//given an array arr and two integer value n and m as input, take the first element
//and find the difference between the first element and integer value n.if the difference 
//is less than m then increment a value. Do this for all the element in an array and print the final result as input
#include<iostream>
using namespace std;



int main() {
    int size, i , n , m;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cin>>n>>m;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]-n< m)
        {
            arr[i] = arr[i]+1;
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    

    return 0;
}