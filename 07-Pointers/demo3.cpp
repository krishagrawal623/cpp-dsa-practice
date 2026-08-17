#include<iostream>
using namespace std;
int main(){

    int x = 10;

    string name = "krish ";

    cout << name;

    string *ptr = &name;
    int *ptr2 = &x;

    cout << ptr <<"  "<< *ptr<< "\n";
    cout << ptr << " " << *ptr2 << "\n";

    *ptr2 = 23; // value gets updated in x bucket

    cout << ptr << " " << *ptr2 << "\n";


    return 0;
}