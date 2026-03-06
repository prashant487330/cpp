#include<iostream>
using namespace std;
int main()
{
    int base;
    int power;
    int k=1;
    cout<<"Enter the base and power ";
    cin>>base>>power;
    for(int i=1;i<=power;i++)
    {
        k=k*base;
    }
    cout<<k;
}