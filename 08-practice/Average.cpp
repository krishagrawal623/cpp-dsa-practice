#include<iostream>
using namespace std;
int main(){

    int n;
    cout<< "Enter no. of terns";
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int sum = 0;

    for(int j = 0;j<n;j++){
        sum+=arr[j];
        
    }
    double average = (double)sum / n;

    cout << "Average = " << average << endl;

    return 0;
}




// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int num;
//     int sum = 0;

//     for(int i = 0; i < n; i++) {
//         cout << "Enter number " << i + 1 << ": ";
//         cin >> num;
//         sum += num;
//     }

//     double average = (double)sum / n;

//     cout << "Average = " << average << endl;

//     return 0;
// }
