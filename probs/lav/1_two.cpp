//conditional, loop, jump statements and questions
//compare two arra and find the uncommon element
//also create a function and class HW
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];
    int count = 0;
    
    for (int i = 0; i < n1; i++)
    {
        cin >>arr1[i];
    }
    
    for (int j = 0; j < n2; j++)
    {
        cin>>arr2[j];
    }

    for (int i = 0; i < n1; i++)
    {
        bool flag =0;
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
            {
                cout<<arr1[i]<<" ";
                count++;
            }
    }
    
    for (int i = 0; i < n2; i++)
    {
        bool flag = 0;
        for (int j = 0; j < n1; j++)
        {
            
            if (arr2[i] == arr1[j])
            {
                flag = 1;
                break;
            }
           
        }
        if (flag == 0)
        {
            cout<<arr2[i]<<" ";
            count++;
        }
        
    }
    cout<<endl;
    cout<<count;

    return 0;

}