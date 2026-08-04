#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int f=0;

    for (int i=n/2;i>=1;i--){
        if(n%i==0) 
        cout<<i<<" ";
        break;
    }
}