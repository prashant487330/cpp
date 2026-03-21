#include<iostream>
using namespace std;
int main()
{
    int d;
     int t=0;
    cout<<"enter any number ";
    cin>>d;
    while(d>0)
    {
        t=t+d%10;
        d=d/10;
    }
    cout<<t;
}