#include<iostream>
using namespace std;
    int main(){
        int n;
        char b='#',c='#',d='#';
        cin>>n;
        if(n>0 && n<=100){
            for(int i=1;i<=n;i++){
                cout<<b<<c<<d<<endl;
            }
        }
        else{
            cout<<"Invalid Input";
        }
        return 0;
    }