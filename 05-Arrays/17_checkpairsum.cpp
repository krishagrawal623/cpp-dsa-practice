#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;

    int ptr1 = 0;
    int ptr2 = n-1;
    bool found = false;
    while(ptr1<ptr2){
        int sum = arr[ptr1]+arr[ptr2];
        if(sum == x){
            found = true;
            break;
        }else if(sum < x){
            ptr1++;
        } 
        else{
            ptr2--;
        }
    }
       if (found)
        cout << "YES";
    else
        cout << "NO";

    return 0;

}
   