#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin >> n;
    if(n > 99 && n<1000) 
    cout<<"Three digit no.";
    else cout<<"Not a three digit no.";
}