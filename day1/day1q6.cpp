#include<iostream>
using namespace std;

int main(){
	int i,j,size,temp;
	cout<<"enter the size of array:"<<endl;
	cin>>size;
	int arr[size];
	for(i=0;i<size;i++){
		cin>>arr[i];
		
	}
	cout<<"before sorting :"<<endl;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<""<<endl;
	cout<<"after sorting :"<<endl;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
