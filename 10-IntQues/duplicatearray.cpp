#include<iostream>
using namespace std;

int main() {
    int arr[10] = {10, 6, 7, 32, 10, 5, 7, 10, 6, 7};

    for(int i = 0; i < 10; i++) {
        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        for(int j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}