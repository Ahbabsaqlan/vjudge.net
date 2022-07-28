#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int T,n,k,x,y,case1,case2;
    cin>>T;
    int a[T];
    for(int i=0;i<T;i++){
        cin>>n>>k>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        cout<<max<<endl;
        case1=max/x;
        case2=(max-(k*x)/y)+k;
        if(case1<=k && case1*x>=max){
            cout<<case1<<endl;
        }else if(case2>=max){
            cout<<case2<<endl;
        }
    }
    

    return 0;
}