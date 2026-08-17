#include<iostream>
using namespace std;
int main(){

    int x = 18;
    float y = 7.9;
    

    // create a pointer that can store address of x;
    // As x is an integer variable , so we need a pointer
    // that can store address of integer type

    int *ptr = &x;
    cout<< ptr<<"\n";

    // create a pointer that can store address of y;
    // As y is an float variable , so we need a pointer
    // that can store address of flot type


    float *ptr1 = &y;
    cout<< ptr1 <<"\n";



    



    return 0;
}