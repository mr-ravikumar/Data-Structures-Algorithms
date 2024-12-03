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
        for(int col=1; col<=n-row; col=col+1)
        {
            cout<<" ";
        }

        // print number
        for(int col=1; col<=row; col=col+1)
        {
            cout<<row;
        }

        cout<<endl;
    }
}
