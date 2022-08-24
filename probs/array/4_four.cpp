//find the missing number

#include<bits/stdc++.h>
using namespace std;

int main(){

    int test_cases;
    cin>>test_cases;

    while (test_cases--)
    {
        int array_size;
        cin>>array_size;

        int arr[array_size-1];
        for (int i = 0; i < array_size-1; i++)
        {
            cin>>arr[i];
        }
        
        int sum = 0;
        int total = array_size*(array_size+1)/2;

        for (int i = 0; i < array_size -1; i++)
        {
             sum = sum + arr[i];
        }

        cout<<total-sum;
        



        //2. Alter will not work FOR 1,0 at first position
        // for (int i = 0; i < array_size - 1; i++)
        // {
        //     if ((arr[i+1]-arr[i]) !=1)
        //     {
        //         cout<<arr[i]+1;
        //         break;
        //     }
            
        // }
        
    }
    

    return 0;
}