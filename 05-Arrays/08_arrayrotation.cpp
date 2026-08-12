// linear search
#include<iostream>
using namespace std;
int main(){
    int array[] = {2,3,1,2,3,7,1};
    int n = sizeof(array)/sizeof(array[0]);
    int k = 2;
    k = k%n;

    int ansarray[7];
    int j = 0;

    for(int i = n - k;i<n;i++){
        ansarray[j++] = array[i];

    }

    for(int i =0;i< n-k;i++){
        ansarray[j++] = array[i];
    }
    for(int i = 0;i<n;i++){
        cout<<ansarray[i]<<" ";
    }
    cout<<endl;
}
    