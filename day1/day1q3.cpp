#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"enter the size of array:"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the elements into array:"<<endl;
	int i,j;
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"the sum of elements:"<<endl;
	int sum=0;
	for(j=0;j<size;j++){
		sum=sum+arr[j];
	}
	cout<<sum<<endl;
	return 0;
}
