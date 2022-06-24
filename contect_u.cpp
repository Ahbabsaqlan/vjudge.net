#include<iostream>
using namespace std;

    int main(){

        int firstNum,odd=0;
        cin>>firstNum;
        if(firstNum<=100){
            int input[firstNum];
            for(int i=0;i<firstNum;i++){
                cin>>input[i];
            }
            for(int i=0;i<firstNum;i++){
                if(input[i]%2!=0 && (input[i]>=-100 && input[i]<=100)){
                    cout<<input[i]<<" ";
                }
            }
        }
        return 0;
    }