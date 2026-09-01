#include<iostream>
#include <vector>
using namespace std;
int main(){

    vector<string> strs = {"flower","fluid","fruit"};
    string ans = "";

    for (int i = 0; i < strs[0].length(); i++) {
        char ch = strs[0][i];
        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].length() || strs[j][i] != ch) {
                cout << ans;
                return 0;
            }
        }

        ans += ch;
    }

    cout << ans;
    return 0;
// }


    
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> strs = {"flower","fluid","fruit"};

    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs[strs.size() - 1];
    string ans = "";

    for (int i = 0; i < first.size(); i++) {
        if (first[i] == last[i]) {
            ans += first[i];
        } else {
            break;
        }
    }

    cout << ans;
}