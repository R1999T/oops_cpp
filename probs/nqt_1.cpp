#include <iostream>
using namespace std;

int washingMachine(int n)
{
    if (n > 0 && n <= 2000)
    {
        return 25;
    }
    else if (n > 2000 && n <= 4000)
    {
        return 35;
    }
    else if (n > 4000 && n <= 7000)
    {
        return 45;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;

    if (n < 0)
    {
        cout << "INVALID INPUT";
    }
    else
    {
        if (washingMachine(n))
        {
            cout << washingMachine(n);
        }
        else
        {
            cout << "OVERLOADED!";
        }
    }

    return 0;
}