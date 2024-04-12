#include<iostream>
using namespace std;

int main(){
	int arrA[3];
	int arrB[4];
	int res[7];
	int i;
	cout<<"enter the elements in arrA"<<endl;
	for(i=0;i<3;i++){
		cin>>arrA[i];
	}
	cout<<"enter the element in arrB"<<endl;
	for(i=0;i<4;i++){
		cin>>arrB[i];
	}
	for(i=0;i<3;i++){
		res[i]=arrA[i];
	}
	for(i=0;i<4;i++){
		res[i+3]=arrB[i];
	}
	cout<<"the concatinated array : "<<endl;
	for(i=0;i<7;i++){
		cout<<res[i]<<" ";
	}
}
