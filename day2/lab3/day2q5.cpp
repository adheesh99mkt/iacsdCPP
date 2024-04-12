//5:Write a program to accept array  from user .Accept number from user and search number is present in array or not.

#include<iostream>
using namespace std;

int main(){
	int i,num,n;
	cout<<"enter size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter elements"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<"enter the number to be searched"<<endl;
	cin>>num;
	for(i=0;i<n;i++){
		if(num==arr[i]){
			cout<<"the index ="<<i<<endl;
		}
		
	}
}
