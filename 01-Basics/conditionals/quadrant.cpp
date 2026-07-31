#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number";
    cin >> x;
    int y;
    cout<<"Enter the number";
    cin >> y;
    if(x==0 && y == 0){
        cout<<x<<","<<y<<"lies on origin";
    }
    else if(y==0){
        cout<<x<<","<<y<<"lies on x axis";
    }
    else if(x==0){
        cout<<x<<","<<y<<"lies on y axis";
    }
    else if(x>0 && y >0){
        cout<<x<<","<<y<<"lies on first quadrant";

    }
    else if(x<0 && y>0){
        cout<<x<<","<<y<<"lies on  second quadrant";

    }
    else if(x<0 && y<0){
        cout<<x<<","<<y<<"lies on third quadrant";
        
    }
    else {
        cout<<x<<","<<y<<"lies on fourth quadrant";
    }
    
}