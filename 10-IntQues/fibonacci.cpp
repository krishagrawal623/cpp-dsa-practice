// #include<iostream>
// using namespace std;
// int main(){

//     int first = 0;
//     int second = 1;
//     int next = 0;
//     cout<<first<<" "<<second<<" ";

//     for(int i = 0; i< 10;i++){
//         next = first +second;
//         cout<<next<<" ";
//         first = second;
//         second = next;
//     }
//     return 0;
// }

// using recursion
#include<iostream>
using namespace std;

int fib(int n){

    if(n == 0)return 0;
    if(n == 1)return 1;
    return fib(n-1) + fib(n-2);
}
int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i = 0;i< n;i++){

        cout<<fib(i)<<" ";
        
    }
    return 0;
}