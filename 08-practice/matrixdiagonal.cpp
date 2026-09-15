#include <iostream>
using namespace std;
// 1 2 3 
// 4 5 6 
// 7 8 9 

int main() {
    int n;
    cin >> n;

    int A[n][n];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += A[i][i];           
        sum += A[i][n - 1 - i];  
    }

    
    if (n % 2 == 1) {
        sum -= A[n / 2][n / 2];
    }

    cout << "Diagonal Sum = " << sum;

    return 0;
}