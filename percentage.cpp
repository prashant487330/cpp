#include<iostream>
using namespace std;
int main()
{

    int hindi,english,c,percentage;
    int totalmarks=300;
    int totalobtainedmarks;
    cout<<"enter marks of hindi english and c";
    cin>>hindi>>english>>c;
    totalobtainedmarks=hindi+english+c;
    percentage=(totalobtainedmarks*100)/totalmarks;
    cout<<percentage;
}