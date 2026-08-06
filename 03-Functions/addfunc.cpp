// #include<iostream>
// using namespace std;

// int add(int num1 ,int num2){
//     int sum = num1+num2;
//     return sum;
// }
// int main(){
//     int a = 5;
//     int b = 4;
//     cout<<add(a,b)<<endl;
     
//     // return 0;
// }

#include<iostream>
using namespace std;

int add(int num1 ,int num2){
    int sum = num1+num2;
    return sum;
}
int add(int num1 ,int num2, int num3){
    int sum = num1+num2+num3;
    return sum;
}
int main(){
    int a = 5;
    int b = 4;
    int c = 7;
    cout<<add(a,b,c)<<endl;
     
    // return 0;
}