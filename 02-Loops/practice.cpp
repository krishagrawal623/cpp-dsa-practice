// cout digits
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     int count = 0;
//     while(n!=0){
//     n = n/10;
//     count++;
//     }
//     cout<<count;
// }

// sum of digits
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     int sum = 0;
//     while(n!=0){
//     int ld = n%10;
//     sum+=ld;
//     n = n/10;
//     }
//     cout<<sum;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int original = n;
    int rev = 0;
    while(n!=0){
    int ld = n%10;
    rev = rev*10;
    rev+=ld;
    n = n/10;
    }
    cout<<rev+original;
}