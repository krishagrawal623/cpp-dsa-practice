#include<iostream>
#include<vector>
using namespace std;

void SortedSquared(vector<int> &v){
    vector<int> ans;
    int left_ptr = 0;
    int right_ptr = v.size()-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }

    reverse(ans.begin(),ans.end());
    
    for(int i = 0;i<v.size();i++){
        cout<<ans[i]<<" ";

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

    SortedSquared(v);
}
