#include<iostream>
using namespace std;

    int main(){

        int firstNum;
            cin>>firstNum;
        if(firstNum<=100){
            int intNum[firstNum],sum=0;
            for(int i=0;i<firstNum;i++){
                cin>>intNum[i];
            }
            for(int i=0;i<firstNum;i++){
                if(intNum[i]>=0 && intNum[i]<=100){
                    sum=intNum[i]+2;
                    cout<<sum<<" ";
                }
                if(intNum[i]<0 && intNum[i]>=-100){
                    cout<<intNum[i]<<" ";
                }
            }
        }
        return 0;
    }