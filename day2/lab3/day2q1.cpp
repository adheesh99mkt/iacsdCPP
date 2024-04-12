/*1:Write a program to create an array of integers and perform following operations on that array like 
finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
array from user. */

#include<iostream>
using namespace std;

int main(){
	int i,size;
	cout<<"enter the size"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the elemebnts"<<endl;
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"sum=";
	int sum=0;
	for(i=0;i<size;i++){
		sum=sum+arr[i];
	}
	cout<<sum<<endl;
	cout<<"average="<<sum/size<<endl;
	int temp=arr[0];
	for(i=1;i<size;i++){
		if(arr[i]>temp){
			temp=arr[i];
		}
	}
	cout<<"max="<<temp<<endl;
	temp=arr[0];
	for(i=1;i<size;i++){
		if(arr[i]<temp){
			temp=arr[i];
		}
	}
	cout<<"min="<<temp<<endl;
	
}
