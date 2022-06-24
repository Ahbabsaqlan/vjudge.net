#include<iostream>
    using namespace std;

    int main(){

        int n;
        cin>>n;
        if(n>1){
            for(int i=1;i<n;i=i+2){
             cout << i << " ";
        }
        }else{
            cout << "invalid";
        }
        return 0;

    }