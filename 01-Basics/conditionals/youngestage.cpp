#include<iostream>
using namespace std;
int main(){
    int a , b , c ;
    cout<<"value of a is  ";
    cin>>a;
    cout<<"value of b is  ";
    cin>>b;
    cout<<"value of c is  ";
    cin>>c;
    if (a<b){
        if(a<c){
            cout<<a<<"youngest";
        }
        else{
            cout<<c<<"is youngest";

        }
    }
    else{
        if(b<c){
            cout<<b<<"b is greatest";

        }
        else{
            cout<<c<<"is youngest";
        }
    }
}