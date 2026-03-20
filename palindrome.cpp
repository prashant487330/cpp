#include<iostream>
using namespace std;
int main()
{
    int a,t=0,b;
    cout<<"Enter num ";
    cin>>a;
    b=a;
    while(a>0)
    {
        t=t*10+a%10;
        a=a/10;
    }
    if(b==t)
    {
        cout<<"Palindrome ";
    }
    else
    {
        cout<<"not palindrome ";
    }
}

// w.a.p to find out the factors of a num.
// w.a.p to check the givin num. is perfect or not
// w.a.p to check the givin num. is armstrong or not