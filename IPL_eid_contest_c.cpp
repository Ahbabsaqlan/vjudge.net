#include<iostream>
using namespace std;


int main(){
    int T,a[T],b[T],c[T];
    cin>>T;
    if(T<=200){
        for(int i=0;i<T;i++){
            cin>>a[i]>>b[i]>>c[i];
        }
        for(int i=0;i<T;i++){
            if((1<=a[i] && a[i]<=40000) && (1<=b[i] && b[i]<=40000) && (1<=c[i] && c[i]<=40000)){
                if((a[i]*a[i]) + (b[i]*b[i])==(c[i]*c[i])){
                    cout<<"Case "<<i+1<<": yes"<<endl;
                }else if((a[i]*a[i]) + (c[i]*c[i])==(b[i]*b[i])){
                    cout<<"Case "<<i+1<<": yes"<<endl;
                }else if((b[i]*b[i]) + (c[i]*c[i])==(a[i]*a[i])){
                    cout<<"Case "<<i+1<<": yes"<<endl;
                }else{
                    cout<<"Case "<<i+1<<": no"<<endl;
                }
            }
        }
    }

    return 0;
}