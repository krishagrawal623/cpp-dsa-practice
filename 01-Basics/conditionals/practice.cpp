// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number :";
//     cin >> x;
//     if(x%2 == 0){
//         cout<<"even no";
//     }
//     else {
//         cout<<"odd no."<<endl;;
//         cout<<"my name is Anthony";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number :";
//     cin >> x;
//     if(x%5 == 0){
//         cout<<"Divisible by 5";
//     }
//     else{
//         cout<<"not divisible by 5";
//     }
// }
// to check greater between area of rectangle and perimeter of rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     int l;
//     cin>>l;
//     int b;
//     cin>>b;
//     float Area;
//     Area = l*b;
//     float Per;
//     Per  = 2*(l+b);
//     if(Area>Per)
//     cout<<"Area is greater";
//     else cout<<"perimeter is greater";
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int x=3,y=5;
//     if(x == 3) cout<<x<<endl;
//     else;
//     cout<<y<<endl;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isprime = true;
    if(n<=1)
    isprime = false;
    else{
    for( int i=2;i<=n;i++)
    if(n%i==0){
    isprime = false;
      break;
    }
    
}
if (isprime)
cout<<n<<"prime no";
else cout<<n<<"not a prime no.";
}