    #include<iostream>
        using namespace std;

        int main(){

            int n,sum1=0,sum2=0;
            char c='1',d='0',e='2';
            cin>>n;
            if(1<=n && n<=1000){
                    int a[n],b[n];
                for(int i=0;i<n;i++){
                    cin>>a[i]>>b[i];
                    if(a[i]>=0 && a[i]<=1000 && b[i]>=0 && b[i]<=1000){
                        for(int j=0;j<n;j++){
                            if(a[i]>b[i]){
                                sum1=sum1+1;
                            }
                            else if(a[i]<b[i]){
                                sum2=sum2+1;
                            }
                        }
                    }
                }
                 if(sum1>sum2){
                        cout<<c;
                    }else if(sum1<sum2){
                        cout<<e;
                    }else{
                        cout<<d;
                    }
            }
           
            return 0;
        }