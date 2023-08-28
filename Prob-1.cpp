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

    char revArr[size];
    for(int i=0;i<size;i++){
        revArr[i]=arr[(size-1)-i];
    }

    int count=0;
    int index=0;
    char final[size];
    for(int i=0;i<size;i++){
        if(revArr[i]==' '){
            index=i;
            for(int j=count;j<i;j++){
                final[j]=revArr[--index];
                count++;
            }
            final[count++]=' ';
        }
    }
    for(int k=count;k<size;k++){
        final[k]=revArr[((size-1)-k)+count];
    }
    
    cout<<"Your Entered Array Text In Reverse: ";
    for(int l=0;l<size;l++){
        cout<<final[l];
    }
	return 0;
}