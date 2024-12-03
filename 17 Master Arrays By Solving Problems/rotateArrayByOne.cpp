#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int x = arr[n-1];
    for(int i=1; i<n; i++)
    {
        arr[n-1-i+1] = arr[n-1-i];
    }
    arr[0]=x;
    cout<<"Rotated array is : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
