#include<iostream>
#include<vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v){
    int Zeros_count = 0;
    // counting zeros
    for(int ele : v){
        if(ele == 0){
            Zeros_count++;
        }
    }

    for(int i = 0; i < v.size(); i++){
        if(i < Zeros_count){
            v[i] = 0;
        } else {
            v[i] = 1;
        }
    }
}

int main(){
    int n;
    cout<<"value of n :";
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        v.push_back(element);
    }

    sortZerosAndOnes(v);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
