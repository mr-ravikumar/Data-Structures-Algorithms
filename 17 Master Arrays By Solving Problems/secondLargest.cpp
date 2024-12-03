#include<iostream>
using namespace std;

int main()
{
    int arr[5]={10, 20, 30, 40, 50};

    int largest = INT32_MIN;
    for(int i=0; i<5; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    int secondLargest = INT32_MIN;
    for(int i=0; i<5; i++)
    {
        if(largest!=arr[i])
        {
            secondLargest = max(secondLargest, arr[i]);
        }
    }
    cout<<secondLargest;
}
