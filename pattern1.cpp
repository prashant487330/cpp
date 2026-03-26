#include<iostream>
using namespace std;
int main()
{
    for(char r='a';r<='c';r++)
    {
        for(char c='a';c<=r;c++)
        {
            cout<<c<<"\t";
        }
        cout<<"\n";
    }
}