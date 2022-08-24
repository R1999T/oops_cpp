#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        long int array_size;
        cin >> array_size;

        long int arr[array_size];
        for (int i = 0; i < array_size; i++)
        {
            cin >> arr[i];
        }
        // Kadane's algorithm to find the maximum sum
        long int local_max = arr[0];
        long int global_max = arr[0];

        for (int i = 1; i < array_size; i++)
        {
            if (arr[i] > (arr[i] + local_max))
            {
                local_max = arr[i];
            }
            else
            {
                local_max = arr[i] + local_max;
                global_max = max(global_max, local_max);
            }
        }

        cout<<global_max<<endl;
    }
}