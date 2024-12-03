#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        // print top left stars
        for(int col=1; col<=row; col++)
        {
            cout<<"* ";
        }

        // print top spaces
        for(int col=1; col<=((2*n)-(2*row)); col++)
        {
            cout<<"  ";
        }

        // print top rightside stars
        for(int col=1; col<=row; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(int row=1; row<=n-1; row++)
    {
        // print bottom left stars
        for(int col=1; col<=n-1-row+1; col++)
        {
            cout<<"* ";
        }

        // print bottom spaces
        for(int col=1; col<=2*row; col++)
        {
            cout<<"  ";
        }

        // print bottom rightside stars
        for(int col=1; col<=n-1-row+1; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}
