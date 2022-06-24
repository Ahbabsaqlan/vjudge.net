#include<iostream>
using namespace std;

int main(){

       long long int n;
       long long int right_num;
       cin>>n;
       if(!(n<1)){
            while (n>0){
            right_num=n%10;
            n=n/10;
            cout<<right_num;
            }
         }

      return 0;
}