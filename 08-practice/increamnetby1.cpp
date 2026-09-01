// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"value of n: ";
//     cin>>n;

//     vector<int> arr;

//     while(n > 0){
//         int ld = n % 10;
//         arr.push_back(ld);
//         n /= 10;

//     }
//     for (int i = arr.size() - 1; i>=0; i--){
//         arr[i]+=1;
//         cout<<arr[i];

//     }

//     return 0;
// }
 

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"value of n: ";
    cin>>n;

    int inum = 0;
    int position = 1;

    while(n > 0){
        int ld = n % 10;
        int newdigit = (ld + 1) % 10;
        inum = newdigit * position + inum;
        position *= 10;
        n /= 10;

    }cout<<inum;
    
    return 0;
}
 

