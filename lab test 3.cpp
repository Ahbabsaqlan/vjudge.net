#include<iostream>
using namespace std;

    int main(){

        int firstNum;

        cin>>firstNum;

        int intNum[firstNum];
        for(int i=0;i<firstNum;i++){
            cin>>intNum[i];
        }
        int Max=intNum[0];
        for(int i=0;i<firstNum;i++){
            if(intNum[i]>Max){
                Max=intNum[i];
            }
        }
        cout<<Max;

        
        return 0;
    }