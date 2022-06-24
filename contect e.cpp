#include<iostream>
    using namespace std;

    int main(){

        int n,a[100],sumhead=0,sumtail=0;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            if(a[i]==0){
                sumhead++;
            }else if(a[i]==1){
                sumtail++;
            }
        }

        if(sumhead<=sumtail){
            cout<<sumhead;
        }else{
            cout<<sumtail;
        }

   
        return 0;
    }