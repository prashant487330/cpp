#include<iostream>
using namespace std;
int main()
{   
    // root find
    int n=25;
    for(int i=1;i<n/2;i++)
    {
        if(i*i==n)
        {
            cout<<"square root is "<<i;
            break;
        }
    }
}
// 26