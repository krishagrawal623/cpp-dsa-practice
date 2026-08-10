/ maximum element out of all
#include<iostream>
using namespace std;
int main(){
   int array[] = {1,2,3,4,5,6,7};
   int size = sizeof(array)/sizeof(array[0]);
   int max = array[0];

   for(int i = 1; i < size; i++){
    if(array[i]>max)
    {
      max = array[i];   
    }
}
   cout<<max;

}