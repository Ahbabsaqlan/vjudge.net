#include<iostream>
#include<string.h>  
using namespace std;

void textReverse(string arr){
    int size=arr.size();
    int count=size;
    int index=0;
    char revArr[size];
    for(int i=0;i<size;i++){
        if(arr[i]==' '){
            for(int j=i-1;j>=index;j--){
                revArr[--count]=arr[j];
            }
            revArr[--count]=' ';
            index=i+1;
        }
    }
    for(int k=size-1;k>=index;k--){
        revArr[--count]=arr[k];
    }
    cout<<"Your Entered Array Text In Reverse: "<<revArr;
}

int main()
{   
    cout<<"Enter Your Array text: ";
    string arr;
    getline(cin,arr);
    textReverse(arr);

	return 0;
}