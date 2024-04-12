#include<iostream>
using namespace std;

int main(){
	int i,size;
	cout<<"enter the size: "<<endl;
	cin>>size;
	int arr[size];
	
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"before doubling"<<endl;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"after doubling"<<endl;
	for(i=0;i<size;i++){
		arr[i]=arr[i]*2;
	}
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
