// Divisible by 5 and 3
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number";
//     cin >> x;
//     if(x%3 == 0 && x%5 == 0)
//     cout<<"No is divisible by 3 and 5";
//     else cout<<"Not divisible by 3 and 5";
// }
// Divisible by 5 or 3
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number";
//     cin >> x;
//     if(x%3 == 0 || x%5 == 0)
//     cout<<"No is divisible by 3 or 5";
//     else cout<<"Not divisible by 3 or 5";
// }
// Divisible by 5 or 3 but not divsiible by 15
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number";
    cin >> x;
    if((x%3 == 0 || x%5 == 0) && (x%15 != 0))
    cout<<" Divisible by 5 or 3 but not divsiible by 15 ";
    else cout<<"condition not satisfied";
}

