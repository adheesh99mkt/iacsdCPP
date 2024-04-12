#include<iostream>
using namespace std;

int main()
{
	int i,j,size;
	cout<<"enter the size:"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the elements into array:"<<endl;
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"elements graeter than 50"<<endl;
	for(j=0;j<size;j++){
		if(arr[j]>50){
			cout<<arr[j]<<endl;
		}
	}
}
