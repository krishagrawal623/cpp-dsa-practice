#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a positive number :";
    cin>>num;
    int sum = 0;

    while(num > 0){

        int ld = num%10;
        sum+=ld;
        num /=10;

    }

    cout<<"sum of digits of number is :"<<sum;
}