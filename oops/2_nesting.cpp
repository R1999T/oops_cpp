// create a class to with has string object and which check the binary digit, read it and print it and takes ones complement of it
#include <bits/stdc++.h>
using namespace std;

class binary
{
private:
    string s;
    int size_of_array;
    int chk_binary(void);

public:
    void read(void);
    void print_bin(void);
    void ones_comp(void);

    //functions for numerical operations
    void value_of_binary(void);
    void print_char(void);
    void print_num(void);
    void print_sum(void);
    
};

void binary ::read(void)
{
    cout << "enter a binary number: ";
    cin >> s;
    cout << endl;

    cout<<"the binary you entered is : ";
    print_bin();
}
int binary ::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            return 0;
        }
    }
    return 1;
}

void binary ::print_bin(void)
{
    if (chk_binary())
    {
        
        for (int i = 0; i < s.length(); i++)
        {
            cout << s.at(i);
        }
        cout << endl;
    }
    else{
        cout<<"the binary is incorrect";
    }
}


void binary::ones_comp(void){
    if (chk_binary())
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i)=='0')
            {
                s.at(i)='1';
            }
            else{
                s.at(i)='0';
            }
            
        }
        cout<<"binary after ones complement: ";
        print_bin();
        
    }
}

//NUMERICAL OPERATION FUNCTION

//converting string to character array
void binary :: print_char(){
    size_of_array =s.length();
    char arr_char[size_of_array];    
    for (int i = 0; i < size_of_array; i++)
    {
        arr_char[i]=(int)s.at(i);
    }
    for (int i = 0; i < size_of_array; i++)
    {
        cout<<arr_char[i]<<" ";
        
    }
    cout<<endl;
}
//converting character array to integer array
void binary :: print_num(){
    size_of_array =s.length();
    int arr_num[size_of_array];
    for (int i = 0; i < size_of_array; i++)
    {
        arr_num[i] = (int)s.at(i)-'0';
    }

    for (int i = 0; i < size_of_array; i++)
    {
        cout<<arr_num[i]<<" ";
    }
    cout<<endl;
}

void binary :: print_sum(){
    size_of_array =s.length();
    int arr_num[size_of_array];
    for (int i = 0; i < size_of_array; i++)
    {
        arr_num[i] = (int)s.at(i)-'0';
    }
    int sum =0;
    for (int j = 0; j < size_of_array; j++)
    {
        sum += arr_num[j];
       //cout<<sum<<" ";

    }
    cout<<endl;

}






int main()
{

    binary num_one;

    //read the number
    num_one.read();

    //taking ones complement
    num_one.ones_comp();

    //character array
    cout<<"printing the charater: ";
    num_one.print_num();

    //integer array
    cout<<"printing the numbers: ";
    num_one.print_num();
    cout<<"the sum is: ";
    num_one.print_sum();


    return 0;
}