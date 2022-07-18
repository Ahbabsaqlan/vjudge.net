#include<iostream>
using namespace std;


int main(){
    int T,a[T],b[T],c[T],A,B,C;
    cin>>T;
    if(T<20){
        for(int i=0;i<T;i++){
            cin>>a[i]>>b[i]>>c[i];
        }
        for(int i=0;i<T;i++){
            if((1000<=a[i] && a[i]<=10000) && (1000<=b[i] && b[i]<=10000) && (1000<=c[i] && c[i]<=10000)){
                A=a[i];
                B=b[i];
                C=c[i];
                if(A>B && B>C || B<C && B>A){
                    cout<<"Case "<<i+1<<": "<<B<<endl;
                }else if(B>A && A>C || A<C && A>B){
                    cout<<"Case "<<i+1<<": "<<A<<endl;
                }else if(A>C && C>B || C<B && C>A){
                    cout<<"Case "<<i+1<<": "<<C<<endl;
                }
            } else{
                cout<<"Case "<<i+1<<": "<<"invalid"<<endl;
            }
        }
    }

    return 0;
}