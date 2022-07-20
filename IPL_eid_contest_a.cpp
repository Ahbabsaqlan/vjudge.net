#include<iostream>
using namespace std;


int main(){
    int T;
    long long int a[T],b[T];
    cin>>T;
    if(T<15){
        for(int i=0;i<T;i++){
            cin>>a[i]>>b[i];
        }
        for(int i=0;i<T;i++){
            if((a[i]<1000000001) && (b[i]<1000000001)){
                if(a[i]<b[i]){
                    cout<<"<"<<endl;
                }else if(a[i]>b[i]){
                    cout<<">"<<endl;
                }else{
                    cout<<"="<<endl;
                }
            }
        }
    }

    return 0;
}