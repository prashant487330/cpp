// //1. Print Num 1 to 10
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<i;
//     }
// }

// //2. Print table of n
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter Num:";
//     cin>>num;
//     for(int i=1;i<=10;i++){
//         cout<<num*i<<"\t";
//     }
// }

// //3. Print Root
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Num:";
//     cin>>n;
//     for(int i=1;i<=n/2;i++){
//         if(i*i==n){
//             cout<<"sq root is:"<<i;
//         }
//     }
// }

// //4. Digit Sum
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Number:";
//     cin>>n;
//     int sum=0;
//     while(n>0){
//         sum=sum+n%10;
//         n=n/10;
//     }
//     cout<<sum;
// }

//5. Power of num
#include<iostream>
using namespace std;
int main(){
    int base,power,n=1;
    cout<<"Enter base:";
    cin>>base;
    cout<<"Enter power:";
    cin>>power;
    for(int i=1;i<=power;i++){
        n=n*base;
    }
    cout<<n;
}