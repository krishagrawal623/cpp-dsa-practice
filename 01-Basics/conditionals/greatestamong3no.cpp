#include<iostream>
using namespace std;
int main(){
    int x , y, z;
    cout<<"value of x is  ";
    cin>>x;
    cout<<"value of y is  ";
    cin>>y;
    cout<<"value of z is  ";
    cin>>z;
    if(x>y && x>z)
    cout<<"x is greatest";
    else if(y>x && y>z)
    cout<<"y is greatest";
    else cout<<"z is greatest";
}