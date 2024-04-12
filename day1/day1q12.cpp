#include<iostream>
using namespace std;

int main(){
	int arr1[3][3];
	int arr2[3][3];
	int i ,j;
	cout<<"enter elements into array 1"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"enter elements into array 2"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr2[i][j];
		}
	}
	cout<<"Array sum:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr1[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	cout<<"display sum"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
}
