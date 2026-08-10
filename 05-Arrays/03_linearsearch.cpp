// linear search
#include<iostream>
using namespace std;
int main(){
   int array[] = {1,2,3,4,5,6,7};
   int size = sizeof(array)/sizeof(array[0]);
   int n;
   cin>>n;
   int index = -1;
   for(int i =0; i<size; i++){
    if(array[i] == n){
    index = i;
    break;
    }
    
    }
    cout<<index;
    return 0;
}

