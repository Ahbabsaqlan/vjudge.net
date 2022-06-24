#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int input;
    cin>>input;
    int value[input];
    if(input>=1 && input<=1000){
        for(int i=0;i<input;i++){
            cin>>value[i];
        }
        int min=value[0];
        for(int i=0;i<input;i++){
            if(value[i]<=pow(10,5)){
                for(int i=0;i<input;i++){
                    if(value[i]<min){
                        min=value[i];
                    }
                }
            }
        }  
        cout<<min;
    }

    return 0;
}