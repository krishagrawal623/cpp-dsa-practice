#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int ptr1 = 0;
    int ptr2 = ;
    bool found = false;

    while(ptr1 < ptr2) {
        int sum = arr[ptr1] + arr[ptr2];

        if(sum == x) {
            found = true;
            break;
        }
        else if(sum < x) {
            ptr1++;
        }
        else {
            ptr2--;
        }
    }

    cout << (found ? "YES" : "NO");

    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int target;
//     cin >> target;

//     bool found = false;

//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(arr[i] + arr[j] == target) {
//                 found = true;
//                 break;
//             }
//         }
//         if(found) break;
//     }

//     if(found){
//         cout<<"yes";
//     }else{
//         cout<<"no";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    bool found = false;

    for(int i = 0;i<n-1;i++){
        int diff = x - arr[i];

        for(int i = 1; i < n; i++) {
            if(diff == arr[i]){
            found = true;
            break;
        }
    }

      if(found) break;

    }

    

    

    if(found){
        cout<<"yes";
    }else{
        cout<<"no";
    }

    return 0;
}