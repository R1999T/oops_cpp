//overflow, precision errors and calculate error
//first calculation then store
#include<bits/stdc++.h>
using namespace std;

int main() {

    //a.1
    cout<< 7/2 * 3<<endl;   //left to right calculation
    cout<< 7*2  /3;    //not bodmas rule

    //2.
    /*rough ranges
        -10^9 < int < 10^9
        -10^12 < long int < 10^12
        -10^18 < long long int < 10^18
    */
   int a = 100000;
   int b = 100000;
   cout<< a*b<<endl;
   //int mx = INT_MAX+1;
   int mx = INT_MAX;
   cout<<mx+1; //read the error carefully: overflow warning
   //long int can be used above here to print int value
   //setprecision() remove 0s afte decimals
   //double, float loose precision for big numbers 
   cout<<endl;
   //3. 
   //constraint 10^9--->means overflow for integer
   int l,B;
   cin>> l >> B;
   cout<<l*B * 1ll<<endl; //fail for 100000 //1ll make it long or use long int datatype


    return 0;
}