#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int num;
    cout<<"enter the num ";
    cin>>num;
    do
    {
        cout<<num*a;
        a++;
    }
    while(a<=10);
}