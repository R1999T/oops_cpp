// caesar cipher
#include <iostream>
using namespace std;

void CaesarCipher(int key, char arr[])
{
    int n = 0, i = 0;

    for (n = 0; arr[i] != '\0'; n++)
    {
        if (arr[i] < 0)
        {
            cout << "INVALID output";
            return;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != ' ')
                {
                    if (arr[i] <= 65 && arr[i] >= 90)
                    {
                        if ((int)(arr[i] + key) <= 90)
                        {
                            arr[i] = (int)(arr[i] + key);
                        }
                        else
                        {
                            arr[i] = (int)(arr[i] + key - 90 + 65 - 1);
                        }
                    }
                }
                else if (arr[i] <= 97 && arr[i] >= 122)
                {
                    if ((int)(arr[i] + key) <= 122)
                    {
                        arr[i] = (int)(arr[i] + key);
                    }
                    else
                    {
                        arr[i] = (int)(arr[i] + key - 122 + 97 - 1);
                    }
                }
                else if (arr[i] < 48 && arr[i] >= 57)
                {
                    if ((int)(arr[i] + key) <= 57)
                    {
                        arr[i] = (int)(arr[i] + key);
                    }
                    else
                    {
                        arr[i] = (int)(arr[i] + key - 57 + 48 - 1);
                    }
                }
            }
        }
    }
    for (int i = 0; arr[i]!= '\0'; i++)
    {
        cout<<arr[i];
    }
    
}

int convertToASCII(int N)
{

    string num = to_string(N);
    for (char ch : num)
    {
        cout << ch << "(" << (int)ch << ")\n";
    }
}

int main()
{

    char arr[] = "my name is raghav tiwari";
    // for (int i = 48; i < 58; i++)
    // {
    //     cout<<(char)i<<" ";
    // }
    CaesarCipher(1,arr);

    return 0;
}