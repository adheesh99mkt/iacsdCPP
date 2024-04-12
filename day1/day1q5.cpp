#include<iostream>
using namespace std;

int main(){
	int size,i,j;
	bool flag;
	cout<<"enter the size:"<<endl;
	cin>>size;
	int arr[size];
	for(i=0;i<size;i++){
		cin>>arr[i];
		
	}
	for(i=0;i<size;i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<"even"<<endl;
		}
		else{
			cout<<arr[i]<<"odd"<<endl;
		}
		
	}
	cout<<"prime: "<<endl;
	for(i=0;i<size;i++){
		for(j=2;j<arr[i];j++){
			if(arr[i]%j==0){
				flag=false;
				break;
			}
			else{
				flag=true;
			}
		}
		if(flag){
			cout<<arr[i]<<" ";
		}
		
		
	}

}
