#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin , str);

    int count = 0;
    for(int i = 0;i<str.length();i++){
        char ch = tolower(str[i]);
        
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
    {
        count++;
    }
}

    cout<<count;

    return 0;

    
}

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string x;
//     cout<<"enter string: ";
//     getline(cin,x);

//     int v= 0;
//     for(char c: x){
//         int low = tolower(c);
//         if(low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u'){
//             v++;
//         }
//     }
//     cout<<"number of vowels: "<<v;
// }