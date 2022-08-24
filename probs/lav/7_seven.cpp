// write a program to find the second greatest element in the given array
// BASE CASE
// 1. if aray values less than 2  invalid input
// 2.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n < 2)
    {
        cout << "invalid input";
    }
    else
    {
       for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        // sort(arr,arr+arr.length);
        // if(arr[n-1]==arr[n-2])
        // {
        //     cout<<"invalid";
        // }
        // else
        // {
        //    cout<<arr[n-2];
        // }
        cout<<arr[n-2];
    }

    

    return 0;
}
