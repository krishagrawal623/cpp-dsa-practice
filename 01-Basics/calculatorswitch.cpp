#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    char ch;
    cin>>ch;
    int y;
    cin>>y;
    switch(ch){
        case '+':
            cout<<"sum of two no. is "<<x+y<<endl;
            break;
        case '-':
            cout<<"diff of two no. is "<<x-y<<endl;
            break;
        case '/':
            cout<<"div of two no. is "<<x/y;
            break;
        case '*':
            cout<<"product  of two no. is "<<x*y;
            break;
        default:
            
    }}

