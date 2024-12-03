#include <iostream>
#include <math.h>
using namespace std;

// Total Digits
int countDigits(int n){
    int count=0;
    while(n){
        count++;
        n=n/10;
    }
    return count;
}

// Armstrong Number
int Armstrong(int num, int digit){
    int n=num, rem, ans=0;
    while(n){
        rem= n%10;
        n=n/10;
        ans=ans+pow(rem, digit);
    }
    return ans;
    // if(ans==num){
    //     return 1;
    // }else{
    //     return 0;
    // }
}

int main()
{
    int num;
    cout<<"Enter a num: ";
    cin>>num;

    // Find digits
    int digit = countDigits(num);
    // Armstrong number
    cout<<Armstrong(num, digit)<<endl;
}
