// * 
// * * 
// * * * 
// * * * * 
#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter m :";
  cin>>m;
  for(int i = 1;i<=m;i++){
    for(int j = 1;j<=i;j++){
      cout<<"* ";
    }
     cout<<endl;
  }
}
  

// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF

// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=i;j++){
//       cout<<(char)(j+64);
//     }
//      cout<<endl;
//   }
// }


// 1
// 12
// 123
// 1234
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=i;j++){
//       cout<<j;
//     }
//      cout<<endl;
//   }
// }


// 1
// 22
// 333
// 4444
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=i;j++){
//       cout<<i;
//     }
//      cout<<endl;
//   }
// }
  

// 1
// AB
// 123
// ABCD
// 12345

// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=i;j++){
//         if(i%2==0){
//             cout<<(char)(j+64);
//         }
//         else{
//             cout<<j;
//         }
      
//     }
//      cout<<endl;
//   }
// }


// * * * * 
// * * * 
// * * 
// *
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = i;j<=m;j++){
//       cout<<"* ";
//     }
//      cout<<endl;
//   }
// }
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=m-i+1;j++){
//       cout<<"* ";
//     }
//      cout<<endl;
//   }
// }


// 1 2 3 4 5 6 
// 2 3 4 5 6 
// 3 4 5 6 
// 4 5 6 
// 5 6 
// 6 
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = i;j<=m;j++){
//       cout<<j<<" ";
//     }
//      cout<<endl;
//   }
// }
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=m-i+1;j++){
//       cout<<j<<" ";
//     }
//      cout<<endl;
//   }
// }

// 1 1 1 1 1 1 1 1 
// 2 2 2 2 2 2 2 
// 3 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 
// 6 6 6 
// 7 7 
// 8 

// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = i;j<=m;j++){
//       cout<<i<<" ";
//     }
//      cout<<endl;
//   }
// }


// 4
// 4 3
// 4 3 2
// 4 3 2 1
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = m ;j>=m-i+1;j--){
//       cout<<j;
//     }
//      cout<<endl;
//   }
// }

// 1 
// 1 3 
// 1 3 5 method1
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=i;j++){
//         
//       cout<<2*j-1<<" ";
//     }
//      cout<<endl;
//   }
// }

// 1 
// 1 3 
// 1 3 5 method2

//  #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=2*i-1;j+=2){
//       cout<<j<<" ";
//     }
//      cout<<endl;
//   }
// }


// floydtriangle
// 1
// 23
// 456
// 78910
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   int a = 1;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=i;j++){
//       cout<<a;
//       a++;
//     }
//      cout<<endl;
//   }
// }


// 1
// 0 1
// 1 0 1
//  0 1 0 1


//  #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter m :";
//   cin>>m;
//   for(int i = 1;i<=m;i++){
//     for(int j = 1;j<=i;j++){
//         if((i+j)%2 ==0){
//             cout<<1<< " ";
//         }
//          else {
//             cout<<0<<" ";
//         }
      
//     }
//      cout<<endl;
//   }
// }


