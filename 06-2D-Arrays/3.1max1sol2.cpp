#include<iostream>
#include<vector>
using namespace std;
int leftMostOneRow(vector<vector<int> > &v){
    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j = v[0].size()-1;
    // finding leftmost one at 0th row
    while(j>=0 && v[0][j] == 1 ){
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }

    // check in rest of the rows if we can find a one left to the leftmost

    for(int i = 1;i<v.size();i++){
        
        while(j>=0 && v[i][j]==1){
            leftMostOne = j;
            j--;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;

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


    int res = leftMostOneRow(vec);
    cout<<res<<endl;

    return 0;
}