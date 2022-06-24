#include<iostream>
using namespace std;
    int main(){
        int a;
        char b='#';
        cin>>a;
        if(a>0){
            for(int i=1;i<=a;i++){
                cout<<b;
            }
        }
        else{
            cout<<"Invalid Input";
        }
        return 0;
    }