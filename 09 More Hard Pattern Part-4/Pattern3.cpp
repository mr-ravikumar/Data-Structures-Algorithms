#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row=1; row<=n; row=row+1)
    {
        // print space
        for(int col=1; col<=row-1; col=col+1)
        {
            cout<<" ";
        }

        // print star
        for(int col=1; col<=n-row+1; col=col+1)
        {
            cout<<"*";
        }

        // print star again
        for(int col=1; col<=n-row; col=col+1)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}
