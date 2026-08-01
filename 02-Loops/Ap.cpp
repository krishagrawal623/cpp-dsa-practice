// 1 3 5 7 9
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=2*n-1;i+=2){
//         cout<<i<<" ";
//     }}

// 4 7 10 13 16 19
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i=4;i<=3*n+1;i+=3){
//         cout<<i<<" ";
//     }}

// with extra variable
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 4;
    for (int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a+3;
    }}