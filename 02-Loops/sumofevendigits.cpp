#include<iostream>
using namespace std;

int main() {
  int n;
  cout<<"enter a number :";
  cin>>n;
  int sum  = 0;
  while(n!=0){
    int ld;
    ld = n%10;
    n = n/10;
    if(ld%2!=0) continue;
        sum+=ld;
    
  }
  cout<<sum;
}

