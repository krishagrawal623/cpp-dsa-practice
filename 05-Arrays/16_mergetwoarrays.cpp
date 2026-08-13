#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> array1(m), array2(n);
    vector<int> result(m + n);

    // input arrays
    for (int i = 0; i < m; i++) {
        cin >> array1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> array2[i];
    }

    int ptr1 = 0, ptr2 = 0, ptr3 = 0;

    // merge logic
    while (ptr1 < m && ptr2 < n) {
        if (array1[ptr1] <= array2[ptr2]) {
            result[ptr3++] = array1[ptr1++];
        } else {
            result[ptr3++] = array2[ptr2++];
        }
    }

    // remaining elements
    while (ptr1 < m) {
        result[ptr3++] = array1[ptr1++];
    }

    while (ptr2 < n) {
        result[ptr3++] = array2[ptr2++];
    }

    // output
    for (int i = 0; i < m + n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
