#include<iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int row=1; row<=n; row++)
//     {
//         // print space
//         for(int col=1; col<=n-row; col++)
//         {
//             cout<<" ";
//         }

//         // print star
//         for(int col=1; col<=row; col++)
//         {
//             cout<<"*";
//         }

//         // print space
//         for(int col=1; col<=row-1; col++)
//         {
//             cout<<"*";
//         }

//         cout<<endl;
//     }
// }


// 2nd Method


int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        // print space
        for(int col=1; col<=n-row; col++)
        {
            cout<<" ";
        }

        // print star
        for(int col=1; col<=2*row-1; col++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}
