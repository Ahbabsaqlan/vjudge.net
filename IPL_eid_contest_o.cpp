#include<iostream>
using namespace std;


int main(){
    int T,c,d;
    char e[T],f[]={'Ordered'},g[]={'Unordered'};
    long long int a[10];
    bool flag=false;
    cin>>T;
    if(T>0 && T<20){
        for(int i=0;i<T;i++){
            for(int j=0;j<10;j++){
                cin>>a[j];
            }
            c=0;
            d=0;
            for(int j=0;j<10;j++){
                if(a[j]<100){
                    for(int k=j+1;k<10;k++){
                        if(a[j]>a[k]){
                            c=c+1;
                            cout<<c<<"c"<<endl;
                        }else if(a[j]<a[k]){
                            d=d+1;
                            cout<<d<<"d"<<endl;
                        }
                        else{
                            flag=false;
                        }
                    }
                }
            }
            if(c==45 || d==45){
                e[i]=f[];
            }else{
                e[i]=g[];
            }
        }
    }

    return 0;
}