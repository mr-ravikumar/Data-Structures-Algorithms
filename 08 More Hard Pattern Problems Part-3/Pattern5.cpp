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
        for(int col=1; col<=n-row; col++)
        {
            cout<<" ";
        }

        // print numbers
        for(int col=1; col<=row; col++)
        {
            cout<<row-col+1;
        }

        cout<<endl;
    }
}
