#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"value of x is  ";
    cin>>x;
    char ch;
    cin>>ch;
    int y;
    cout<<"value of y is  ";
    cin>>y;
    if(ch == '+') cout<<x+y;
    if(ch == '-') cout<<x-y;
    if(ch == '*') cout<<x*y;
    if(ch == '/') cout<<x/y;
    }