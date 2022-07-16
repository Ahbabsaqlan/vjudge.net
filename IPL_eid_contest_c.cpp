#include<iostream>
#include<cmath>
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
                if(pow(a[i],2)+pow(b[i],2)==pow(c[i],2)){
                    cout<<"case "<<i+1<<": yes"<<endl;
                }else if(pow(a[i],2)+pow(c[i],2)==pow(b[i],2)){
                    cout<<"case "<<i+1<<": yes"<<endl;
                }else if(pow(b[i],2)+pow(c[i],2)==pow(a[i],2)){
                    cout<<"case "<<i+1<<": yes"<<endl;
                }else{
                    cout<<"case "<<i+1<<": no"<<endl;
                }
            }
        }
    }

    return 0;
}