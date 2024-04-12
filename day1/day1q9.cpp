#include<iostream>

using namespace std;

int main(){
	int i,size,target;
	cout<<"enter the size"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter elements"<<endl;
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"display array"<<endl;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"enter the element to be search:"<<endl;
	cin>>target;
	int start=0;
	int end=size-1;
	int mid;
		
	while(start<=end){
		mid=(end+start)/2-1;
		
			
			if(target<arr[mid]){
				end=mid-1;
			}
			else if(target>arr[mid]){
				start=mid+1;
			}		
			else{
				cout<<"elemenet at the index :"<<mid;
				break;
			}

	}
	
	
}
