//2: Write a program to Accept a number and display its sum of digits.:ex 568    5+6+8

#include<iostream>
using namespace std;

int main(){
	int n,dig,sum=0;
	cout<<"enter number"<<endl;
	cin>>n;
	while(n!=0){
		dig=n%10;
		sum=sum+dig;
		n=n/10;
	}
	cout<<"sum of digits="<<sum<<endl;
}
