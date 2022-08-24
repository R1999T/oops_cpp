
#include <bits/stdc++.h>
using namespace std;

int count_triplets(int size, int *arr)
{

    int count = 0;
    int index[100000] = {0};
    for (int i = 0; i < size; i++)
    {
        index[arr[i]] = 1;
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (index[arr[i] + arr[j]] == 1)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (count_triplets(size, arr))
    {
        cout << count_triplets(size, arr);
    }

    return 0;
}