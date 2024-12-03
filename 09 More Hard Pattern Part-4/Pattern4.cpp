#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        // print upper leftside stars
        for(int col=1; col<=n-row+1; col++)
        {
            cout<<"* ";
        }

        // print upperside spaces
        for(int col=1; col<=2*row-2; col++)
        {
            cout<<"  ";
        }

        // print upper rightside stars
        for(int col=1; col<=n-row+1; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(int row=1; row<=n; row++)
    {
        // print below leftside stars
        for(int col=1; col<=row; col++)
        {
            cout<<"* ";
        }

        // print belowside spaces
        for(int col=1; col<=((2*n)-(2*row)); col++)
        {
            cout<<"  ";
        }

        // print below rightside stars
        for(int col=1; col<=row; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}
