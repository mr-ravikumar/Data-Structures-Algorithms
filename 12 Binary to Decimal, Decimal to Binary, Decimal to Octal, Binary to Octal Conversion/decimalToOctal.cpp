#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter decimal number: ";
    cin>>num;

    int rem, ans=0, mul=1;
    while(num>0)
    {
        // rem
        rem = num % 8;

        // num
        num = num/8;

        // ans
        ans = ans + rem * mul;

        // mul
        mul = mul*10;
    }
    cout<<"Octal is : "<<ans;
}
