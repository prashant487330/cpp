#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a,b and c ";
    cin>>a>>b>>c;
    if((a==b) && (b==c))
    {
        cout<<"Numbers are equal";
    }
    else if((a>b) && (b>c))
    {
        cout<<a;
    }
    else if((b>a) && (b>c))
    {
        cout<<b;
    }
    else{
        cout<<c;
    }
    
}