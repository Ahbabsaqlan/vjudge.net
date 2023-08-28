#include<iostream>
#include<string.h>  
using namespace std;

int main()
{   
    int size;
    cout<<"Enter Your Array Size: ";
    cin>>size;
    cin.ignore();
    
	char arr[size];    
    cout<<"Enter Your Array text: ";
    cin.getline(arr,size+1);
    cout<<endl;
    cout<<"Your Entered Array Text: "<<arr<<endl;
    

    char revArr[size];
    for(int i=0;i<size;i++){
        revArr[i]=arr[(size-1)-i];
    }
    
    cout<<"Your Entered Array Text In Reverse: "<<revArr<<endl;
    
    
	return 0;
}