#include<iostream>
using namespace std;
int main()
{
    //gp series=a*r^(n-1)
    //1,3,9,27,81
    //a=first term
    //r=comman ratio
    int a=1;
    int r=3;
    int n=5;
    int ans;
    ans=a*r^(n-1);
    cout<<ans;
}