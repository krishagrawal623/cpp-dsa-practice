//     *     
//     *     
// * * * * * 
//     *     
//     *  



// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   int mid = m/2+1;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=m;j++){
//       if(i == mid || j == mid)
//       cout<<"* ";
//       else cout<<"  ";
//     }
//      cout<<endl;
// ;  }
// }


// * * * * * * 
// *         * 
// *         * 
// * * * * * * 
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   int n;
//   cout<<"Enter n :";
//   cin>>n;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=n;j++){
//         if(i == 1 || i == 4 ||  j== 1 || j == 6 )
//       cout<<"* ";
//       else cout<<"  ";
//     }
//      cout<<endl;
//   }
// }


// *       * 
//   *   *   
//     *     
//   *   *   
// *       * 
// #include <iostream>
// using namespace std;

// int main() {
//     int m;
//     cout << "Enter m : ";
//     cin >> m;

//     for (int i = 1; i <= m; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (i == j || i + j == m + 1) // diagonals
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }
//         cout << endl;
//     }

// }

//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        
        for (int j = 1; j <= i; j++) {
            cout << "*";
            if (j < i) cout << " ";
        }

        cout << endl;
    }

    return 0;
}


//             1 
//           1 2 
//         1 2 3 
//       1 2 3 4 
//     1 2 3 4 5 
//   1 2 3 4 5 6 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     for( int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++)
//             {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     for( int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++)
//             {
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }

// }


//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     for( int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=n;j++)
//             {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }

