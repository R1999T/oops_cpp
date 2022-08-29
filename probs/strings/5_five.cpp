#include<iostream>
#include<string.h>
using namespace std;

void swap(char a, char b){
    char temp = a;
    a = b;
    b = temp;
}




string reverse_word_in_string(string s){
    int left =0;
    int right = 0;
    while (left < s.length())
    {
        while (right < s.length() && s[right] !=' ')
        {
            right++;
        }

        while (left != right)
        {
            swap(s[left], s[right]);
            left++;
        }
        left = right + 1;
        right = left;   
    }
    return s;
}


int main() {

    string s = "the sky is blue";

    string reversed = reverse_word_in_string(s);

    cout<<reversed;



    return 0;
}