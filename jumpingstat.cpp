#include<iostream>
using namespace std;
int main()
{
    // //jumping statement
    // cout<<"line 1 ";
    // goto level;
    // cout<<"line 2 ";
    // level:
    // cout<<"line 3 ";
    int a=1;
    level:
    if(a<=10)
    {
        cout<<2*a<<endl;
        a++;
        goto level;
    }

}