#include<iostream>
using namespace std;
int main()
{
    //fibonaacci series
    int first=2;
    int second=3;
    int next=first+second;
    first=second;
    second=next;
    cout<<first; 
}