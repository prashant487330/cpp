#include<iostream>
using namespace std;
int main()
{   char x='a';
    for(char r='a';r<='c';r++)
    {
        for(char c='a';c<=r;c++)
        {
            cout<<x<<"\t";
            x++;
        }
        cout<<"\n";
    }
}