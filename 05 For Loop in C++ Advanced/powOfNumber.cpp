#include<iostream>
using namespace std;

int main()
{
    int n=5, pow=4;
    int num=n;
    for(int i=1; i<pow; i++)
    {
        num = num*n;
    }
    cout<<num;
}
