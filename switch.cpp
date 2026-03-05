#include<iostream>
using namespace std;
int main()
{
    //use for 2 options
    // in switch int and char datatype is used
    // disadvantages-fallthrough condition,default is not fixed,and format is not sequence
    int choice;
    cout<<"enter your choice 1.for Fruits and 2. for Vegetables";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"choose your fruits 1.for Apple and 2.for banana";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Apple";
            break;
            case 2:cout<<"banana";
            break;
            default:cout<<"invalid input";
        }
         break;
         
        case 2:cout<<"choose your vegetables 1.for potato and 2.for tomato";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Potato";
            break;
            case 2:cout<<"tomato";
            break;
            default:cout<<"invalid input";
        }
        break;
       
    }
}