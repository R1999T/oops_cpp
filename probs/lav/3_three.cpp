//write a program to search an element in an array and print the index value. if element not present then print -1

#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin >>key;
    int count=0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == key)
        {
            cout<<j;
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<-1;
    }
    
    

    return 0;
} // namespace std;
