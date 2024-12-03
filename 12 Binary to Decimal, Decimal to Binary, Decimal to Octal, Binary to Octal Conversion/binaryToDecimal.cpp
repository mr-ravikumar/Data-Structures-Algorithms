#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Binary Number: ";
    cin>>num;

    int ans=0, rem, mul=1;
    while(num>0)
    {
        // rem
        rem = num%10;

        // ans
        ans=rem*mul+ans;

        // qutioent
        num=num/10;

        mul = mul*2;

    }
    cout<<"Decimal is : "<<ans;
}
