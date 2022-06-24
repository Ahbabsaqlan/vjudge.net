#include<iostream>
#include<math.h>
    using namespace std;
    int main(){
        int a,b;
        cin>>a>>b;
        int digits[4];
        if(1000<=a && a<=b && b<=9999){
            for(int i=a;i<=b;i++){
                int n=i;
                digits[0]=n%10;
                n=n/10;
                digits[1]=n%10;
                n=n/10;
                digits[2]=n%10;
                n=n/10;
                digits[3]=n%10;
                int sum;
                sum=pow(digits[0],4)+pow(digits[1],4)+pow(digits[2],4)+pow(digits[3],4);

                if(sum==i){
                    cout<<i<<" ";
                }
            }
        }
        else{
            cout<<"Invalid Input";
        }
        return 0;
    }