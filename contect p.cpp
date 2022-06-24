#include<iostream>
using namespace std;

int main(){

    int num;
    long long int factorial=1;
    cin>>num;
    if(num>=0 && num<=20){
        for(int i=0;i<num;i++){
            factorial=factorial*(i+1);
        }
        cout<<factorial;
    }

    return 0;
}