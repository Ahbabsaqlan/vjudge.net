#include<iostream>
using namespace std;

int main(){

    int A;
    cin>>A;
    if(A>0 && A<100){
        for(int i=1;i<=A;i++){
            if(A%i==0){
                cout<<i<<endl;
            }
            
        }
    }

    return 0;
}