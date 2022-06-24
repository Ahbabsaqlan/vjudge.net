#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    if(a>0 && b>0){
    if(a<=b && b<=1000){
        for(int i=a;i<=b;i++){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"Invalid";
    }
}
else{
    cout<<"Invalid";
}


    return 0;
}