//4. Write a program to calculate factorial of a number. 
#include<iostream>
using namespace std;

int main(){
	int n,i,fact=1;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<"factorial="<<fact<<endl;
	
}
