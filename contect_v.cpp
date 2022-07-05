#include<iostream>
#include<cmath>
using namespace std;

    int main(){

        long long int n;
        long long int sqr;
        cin>>n;
        if(n<=pow(10,9)){    
            for(long long int i=1;i<=n;i++){
                sqr=pow(i,2);
                if(sqr<=n)
                    cout<<sqr<<" ";
            }
        }

        return 0;
    }