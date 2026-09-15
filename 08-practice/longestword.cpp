#include<iostream>
using namespace std;

int main() {

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string word = "";
    string longest = "";

    for(int i = 0; i <= str.length(); i++) {

        if(i == str.length() || str[i] == ' ') {

            if(word.length() > longest.length()) {
                longest = word;
            }

            word = "";
        }
        else {
            word += str[i];
        }
    }

    cout << "Longest word: " << longest << endl;
    cout << "Length: " << longest.length() << endl;

    return 0;
}