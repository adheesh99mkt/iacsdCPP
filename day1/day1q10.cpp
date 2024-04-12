#include<iostream>
using namespace std;

int main(){
	int i,size;
	cout<<"enter size :"<<endl;
	cin>>size;
	
	char arr[size];
	for(i=0;i<size;i++){
		cin>>arr[i];
		
	}
	cout<<"vowels"<<endl;
	for(i=0;i<size;i++){
		if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
		{
			cout<<arr[i]<<" ";
		}
	}
}
