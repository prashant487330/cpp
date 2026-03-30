#include<iostream>
using namespace std;
int main()
{
    // leap year find out
    // normal year=leap/4 but not divisible by 100
    int year;
    cout<<"enter year";
    cin>>year;
    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        cout<<"leap year";
    }
    else{
        cout<<"not";
    }
}