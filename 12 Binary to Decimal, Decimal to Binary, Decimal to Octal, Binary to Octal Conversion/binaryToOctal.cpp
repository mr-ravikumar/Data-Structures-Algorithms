#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter binary numbers: ";
    cin>>num;

    int rem, ans=0, mul=1;
    while(num>0)
    {
        // rem
        rem = num % 10;

        // num
        num = num / 10;

        // ans
        ans = ans + rem * mul;

        // mul
        mul = mul * 2;
    }

    double rem1, result=0, mul1=1; 
    while(ans>0)
    {
        // rem
        rem1 = ans % 8;

        // num
        ans = ans/8;

        // result
        result=result+rem1*mul1;

        // mul1
        mul1 = mul1*10;
    }
    cout<<"Octal is : "<<result;
}
