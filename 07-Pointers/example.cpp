#include <iostream>
using namespace std;

int main(){

    int x , y;
    cin>> x >> y;

    int *ptr1 = &x;
    int *ptr2 = &y;


    int sum ;
    int *ptr3 = &sum;

    *ptr3 =*ptr1 + *ptr2;

    cout<< ptr1 << " " << ptr2 << " \n";
    cout << sum;

    return 0;
}