#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"enter input";
    cin>>a;
    if(a>='A' && a<='Z')
    {
        cout<<"upper case";
    }
    else if(a>='a'&& a<='z')
    {
        cout<<"lower case";
    }
    else
    {
        cout<<"invalid input";
    }
}
