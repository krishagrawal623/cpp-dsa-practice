#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;
    int ptr1 = 0;
    int ptr2 = 1;
    bool found = false;
    while(ptr1<n && ptr2<n){
        int diff = abs(arr[ptr1]-arr[ptr2]);
        if(diff == x){
            found = true;
            break;

        }else if (diff < x ){
            ptr2++;
        }else{
            ptr1++;
        }
    }

    if(found){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}