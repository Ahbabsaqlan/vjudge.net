#include<iostream>
using namespace std;

    int main(){

        int firstNum;
        cin>>firstNum;
        if(firstNum<=30000){
            int intNum[firstNum],sum=0;
            for(int i=0;i<firstNum;i++){
                cin>>intNum[i];
                sum=(i+1)+sum;
            }
            if(sum<=1){
                cout<<"Ooops!";
            }
            else{
                int Max=intNum[0],Min=intNum[0];
                for(int i=0;i<firstNum;i++){
                    if(intNum[i]>0){
                        if(intNum[i]>Max){
                            Max=intNum[i];
                        }
                        if(intNum[i]<Min){
                            Min=intNum[i];
                        }
                    }
                }
                    cout<<Min<<" "<<Max;
            }
        }
        return 0;
    }