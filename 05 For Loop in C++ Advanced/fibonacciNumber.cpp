#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int last=0, pre=1, curr;
    for(int i=3; i<=n; i++)
    {
        curr = pre + last;
        last = pre;
        pre = curr;
    }
    cout<<"Fibonacci number is: "<<curr;
}
