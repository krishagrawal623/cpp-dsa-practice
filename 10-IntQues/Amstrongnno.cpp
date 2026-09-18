#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;

    int sum = 0;
    int original = num;

    while(num!=0){

        int ld = num % 10;
        int cube = ld * ld * ld;
        sum += cube;
        num = num / 10;


    }if(original == sum){
        cout<< original <<" is Amstrong no.";
    }else{
        cout<< original<<" is not a Amstrong no";
    }
}