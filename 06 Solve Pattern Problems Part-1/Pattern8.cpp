#include<iostream>
using namespace std;

// 1st Method

// int main()
// {
//     for(int row=1; row<=5; row++)
//     {
//         for(int col=1; col<=5; col++)
//         {
//             cout<<char('a'+row-1)<<" ";
//         }
//         cout<<endl;
//     }
// }

// 2nd Method

int main()
{
    for(int row=1; row<=5; row++)
    {
        char name = 'a' + row - 1;

        for(int col=1; col<=5; col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}
