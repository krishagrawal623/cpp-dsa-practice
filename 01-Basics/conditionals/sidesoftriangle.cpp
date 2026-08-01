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
    if((x+y) > x && (y+z) > x && (x+z) >y )
    cout<<"sides of a triangle";
    else cout<<"not";
   

}