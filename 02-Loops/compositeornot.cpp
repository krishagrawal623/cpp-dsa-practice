#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = true; //no. is prime
    for (int i=n/2;i>=2;i--){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"prime";
    else cout<<"composite";
}