#include<iostream>
#include<vector>
using namespace std;
int maximumOnesRow(vector<vector<int> >&v){

    int maxOnes = INT_MIN;
    int MaxOnesRow = -1;
    int columns = v[0].size();

    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            if(v[i][j] == 1){
                int numberOfOnes = columns - j;
                if(numberOfOnes > maxOnes){
                    maxOnes = numberOfOnes;
                    MaxOnesRow = i;
                }
                break;
            }
        }
    }
    return MaxOnesRow;
}

int main(){

    int r ,c;
    cin>>r>>c;

    vector<vector<int> >  vec(r,vector<int> (c));
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>vec[i][j];
        }
    }


    int res = maximumOnesRow(vec);
    cout<<res<<endl;

    return 0;
}