#include<iostream>
#include<cmath>
using namespace std;

int main(){

    long int n,sum=0;
    bool flag=false;
    cin>>n;
    if(n>=2 && n<=100){
        long int m[n],l[n];
        for(int i=0;i<n;i++){
            cin>>m[i]>>l[i];
        }
        
        for(int i=0;i<n;i++){
            if((m[i]>l[i])){
                flag=true;
            }else if(!(m[i]>l[i])){
                flag=false;
                break;
            }
            if(flag==true){
                if(m[i]<=pow(2,32) && l[i]<=pow(2,32)){
                sum=m[i]-l[i];
                cout<<sum<<endl;
                }
            }
            
        }
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}