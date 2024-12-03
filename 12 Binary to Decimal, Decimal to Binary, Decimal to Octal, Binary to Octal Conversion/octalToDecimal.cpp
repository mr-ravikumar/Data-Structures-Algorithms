#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter octal number: ";
    cin>>num;

    int ans=0, rem, mul=1;
    while(num>0)
    {
        // rem
        rem = num % 10;

        // num
        num = num / 10;

        // ans
        ans = ans + rem * mul;

        // mul
        mul = mul * 8;
    }
    cout<<"Decimal is : "<<ans;
}
