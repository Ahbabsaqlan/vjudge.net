#include<iostream>
    using namespace std;
    int main(){
        int a,b;
        cin>>a>>b;
        int digits[4];
        
        if((a>=1000 && b<=9999) && a<=b){
            for(int i=a;i<=b;i++){
                int n=i;
                digits[3]=n%10;
                n=n/10;
                digits[2]=n%10;
                n=n/10;
                digits[1]=n%10;
                n=n/10;
                digits[0]=n%10;
                
                if (!((digits[0]==digits[1]) || (digits[0]==digits[2]) || (digits[0]==digits[3]))){
                    if(!((digits[1]==digits[2]) || (digits[1]==digits[3]))){
                        if(!(digits[2]==digits[3])){
                            for(int j=0;j<4;j++){
                
                                cout<<digits[j];
                            }
                            cout<<" ";
                        }
                    }
                }
            }

        }

        return 0;
    }