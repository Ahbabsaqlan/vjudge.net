#include<iostream>
using namespace std;

    int main(){

        int firstNum;
        int even[firstNum],evenPointer=0;
        int odd[firstNum],oddPointer=0;


        cin>>firstNum;
        int input[firstNum];
        for(int i=0;i<firstNum;i++){
            cin>>input[i];
        }
        for(int i=0;i<firstNum;i++){
            if(input[i]%2==0){
                cout<<input[i]<<" is even"<<endl;
                
                
            }
            else{
                cout<<input[i]<<" is odd"<<endl;
                
                
            }
        }
        
        return 0;
    }