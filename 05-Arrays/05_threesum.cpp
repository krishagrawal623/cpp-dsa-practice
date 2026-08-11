#include<iostream>
using namespace std;
int main(){
    int array[] = {3,1,2,4,1,6};
    int targetsum = 2;
    int count = 0;

    
    for(int i =0;i<6;i++){
        for(int j = i+1;j<6;j++){
            for(int k = j+1;k<6;k++)
            if(array[i]+array[j]+array[k]==targetsum){
                count+=1;
            }
        }
    }
    cout<<count<<endl;

    


}