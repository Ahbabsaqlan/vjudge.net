#include<iostream>
using namespace std;
    int main(){
        int n;
        char b='#';
        cin>>n;
        if(n>0 && n<=100){
                for(int j=1;j<=n;j++){
                    cout<<b;
                }
                cout<<endl;
                for(int k=1;k<=n;k++){
                    cout<<b;
                }
                cout<<endl;
                for(int i=1;i<=n;i++){
                    cout<<b;
                }
                cout<<endl;
                for(int m=1;m<=n;m++){
                    cout<<b;
                }
            }
        else{
            cout<<"Invalid Input";
        }
        return 0;
    }