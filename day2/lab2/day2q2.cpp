//2. Write a program to accept two integers x and n and compute x raised to n.

#include<iostream>
using namespace std;

int main(){
	int x,n,i,res=1;
	cout<<"enter x and n"<<endl;
	cin>>x>>n;
	 for(i=0;i<n;i++){
	 	res=res*x;
	 }
	 cout<<res<<endl;
}
