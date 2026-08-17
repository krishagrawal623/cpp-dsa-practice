// #include<iostream>
// using namespace std;
// int main(){

//     int *ptr;

//     cout << ptr << "\n";

//     int marks = 90;

//     ptr = &marks; // reassignmnet

//     cout << ptr << "\n";

 


//     return 0;
// }

//Address of operator

// #include<iostream>
// using namespace std;
// int main(){

//     string name = "krish ";

//     cout << name;

//     string *ptr = &name;

//     cout << ptr;
//     return 0;
// }

// Dereference operator

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
    return 0;
}