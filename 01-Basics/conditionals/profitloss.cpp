#include<iostream>
using namespace std;
int main(){
    int sp,cp,p,l;
    cout<<"Enter the sp: ";
    cin>>sp;
    cout<<"Enter the cp: ";
    cin>>cp;
    if(sp>cp){
        p = sp - cp;
        cout<<"profit of :"<<p;

    }
    else if (sp<cp) { 
        l = cp -sp;
        cout<<"loss  of :"<<l;

    }
    else 
    {
        cout<<"Breakeven";
    }

}