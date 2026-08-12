#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    // 1-based indexing
    vector<int> v(n + 1, 0);

    // Input elements
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    // Prefix sum
    for (int i = 1; i <= n; i++) {
        v[i] += v[i - 1];
        
    }

    int q;
    cout<<"enter value of Q: ";
    cin >> q;

    while (q--) {
        int l, r;
        cout<<"enter l :";
        cin >> l ;
        cout<<"enter r :";
        cin >> r;

        int ans = v[r] - v[l - 1];
        cout << ans << endl;
    }

    return 0;
}
