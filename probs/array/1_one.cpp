#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        long int size_of_arr;
        long int req_sum;
        long int flag = 0;
        long int start = 0;
        long int sum = 0;
        cin >> size_of_arr >> req_sum;

        long int arr[size_of_arr];
        for (int i = 0; i < size_of_arr; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < size_of_arr; i++)
        {
            sum = sum + arr[i];
            while (sum > req_sum)
            {
                sum = sum - arr[start];
                start++;
            }
            if (sum == req_sum)
            {
                cout << start + 1 << " " << i + 1 << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
