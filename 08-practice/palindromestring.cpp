// Without constraints
// #include<iostream>
// using namespace std;
// int main(){

//     string name,cleaned = "";
//     cout<<"Enter the value: ";
//     getline(cin, name);

   

//     bool ispalindrome = true;

//     for (char ch : name) {
//         if (isalnum(ch)) {      
//             cleaned += tolower(ch);
//         }
//     }

//     int left = 0;
//     int right = cleaned.length() - 1;




//     while(left < right){
//         if(cleaned[left] != cleaned[right]){
//             ispalindrome = false;
//             break;
//         }
//         left++;
//         right--;
//     }

//     if(ispalindrome){
//         cout<<name<<" is palindrome";
        
//     }else{
//         cout<<name<<" is not palindrome";
//     }


// }

//constraints O(1) extra space and O(n) time complexity.................

// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// int main() {
//     string str;
//     cout<<"Enter the string";
//     getline(cin, str);

//     int left = 0;
//     int right = str.length() - 1;

//     bool isPalindrome = true;

//     while (left < right) {

//         while (left < right && !isalnum(str[left]))
//             left++;

//         while (left < right && !isalnum(str[right]))
//             right--;

//         if (tolower(str[left]) != tolower(str[right])) {
//             isPalindrome = false;
//             break;
//         }


      
//         left++;
//         right--;
//     }

//     if (isPalindrome)
//         cout << "Palindrome";
//     else
//         cout << "Not a palindrome";

//     return 0;
// }




// Using stack method(LIFO)...................

#include<iostream>
using namespace std;
int main(){

    string str;
    cout<<"Enter a value: ";
    getline(cin , str);

    stack<char> st;

    for(char ch : str){
        if(isalnum(ch)){
            st.push(tolower(ch));
        }
    }

    bool isPalindrome = true;

    for(char ch : str){
        if(isalnum(ch)){
            if(tolower(ch) != st.top()){
                isPalindrome = false;
                break;
            }
            st.pop();
        }
    }


    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;



}


