#include<iostream>
using namespace std;

    int main(){

        int inicialT,finalT,t,inicialV,finalV,v,s=0;
        cin>>inicialT>>finalT;
        if((inicialT>=0 && inicialT<=200) && (finalT>=0 && finalT<=200)){
            t=finalT-inicialT;
        }
        cin>>inicialV>>finalV;
        if((inicialV>=-100 && inicialV<=100) && (finalV>=-100 && finalV<=100)){
            v=finalV-inicialV;
        }
        cout<<s<<endl;
        s=(t*v)*2;
        cout<<s;
        
        

        return 0;
    }