#include<iostream>
using namespace std;

int main()
{   
    int num,sum;
    cout<<"Enter Your Input Number: ";
    cin>>num;
    
	for(int i=1;i<=num;i++){
        cout<<"Cube Of "<<i<<": "<<i*i*i<<endl;
        sum+=i*i*i;
    } 
    cout<<"Sum: "<<sum<<endl;
	return 0;
}