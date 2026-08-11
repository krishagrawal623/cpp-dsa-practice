#include<iostream>
#include<climits>
using namespace std;

// int largestelementindex(int array[], int size) {
//     int maxindex = 0;
//     int max = INT_MIN;

//     for(int i = 0; i < size; i++) {
//         if(array[i] > max) {
//             max = array[i];
//             maxindex = i;
//         }
//     }
//     return maxindex;
// }


int secondlargestelement(int array[] , int size){
    int max = INT_MIN;
    int secondmax = INT_MIN;
        for(int i = 0; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        
        }
    }



for(int i = 0; i < size; i++) {
    if(array[i]>secondmax && array[i] != max){
        secondmax = array[i];
    }
}

return secondmax;


}


int main() {
    int array[] = {2, 4, 1, 7, 5, 7, 1};
    int size = 7;

//     // Find largest
//     int indexoflargest = largestelementindex(array, size);
//     cout<<array[indexoflargest];
//     int largestelement = array[indexoflargest];
//     for(int i = 0;i<size;i++){
//         if(array[i] == largestelement){
//             array[i]=-1;
//         }
//     }

//     // Find second largest
//     int indexofsecondlargest = largestelementindex(array, size);

//     cout << "Second largest element: " << array[indexofsecondlargest];

//     return 0;
// }
cout<<secondlargestelement(array , size)<<endl;
}