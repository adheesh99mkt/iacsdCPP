#include<iostream>
using namespace std;


int main()
{
	
int i,j,size,temp;
cout<<"enter the size: "<<endl;
cin>>size;
int arr[size];
cout<<"enter the elements"<<endl;

for(i=0;i<size;i++){
	cin>>arr[i];
}
cout<<"before reversing : "<<endl;
for(i=0;i<size;i++){
	cout<<arr[i]<<" ";
	
}
cout<<endl;
cout<<"after reversing : "<<endl;
for(i=0;i<size/2;i++){
	temp=arr[i];
	arr[i]=arr[size-i-1];
	arr[size-i-1]=temp;
	
}
for(i=0;i<size;i++){
	cout<<arr[i]<<" ";
}
}
