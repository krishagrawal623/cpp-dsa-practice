#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    
    int count_even = 0;
    int count_odd = 0;

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }


    for(int i = 0;i<size;i++){
        if(arr[i]%2 == 0){
            count_even+=1;
        }else{
            count_odd+=1;
        }

        
    }
    cout << "Even numbers: " << count_even << endl;
    cout << "Odd numbers: " << count_odd << endl;
    return 0;
}