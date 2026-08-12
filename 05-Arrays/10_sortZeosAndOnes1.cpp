#include<iostream>
#include<vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v){
    int left_ptr = 0;
    int right_ptr = v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr] == 0 ){
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
    return;
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
