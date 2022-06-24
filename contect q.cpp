#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int input_1,input_2;
    long long int square=0;
    long long int cube=0;
    cin>>input_1>>input_2;
    if(input_1>=0 && input_1<=input_2 && input_2<=10000){
        for(int i=input_1;i<=input_2;i++){
            square=pow(i,2);
            cout<<square<<" ";
        }
        cout<<endl;
        for(int i=input_2;i>=input_1;i--){
            cube=pow(i,3);
            cout<<cube<<" ";
        }
    }

    return 0;
}