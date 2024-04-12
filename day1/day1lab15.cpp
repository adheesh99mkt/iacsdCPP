//15: Write a  program to enter a number and print its reverse.

#include<iostream>
using namespace std;

int main(){
	int n,dig,rev=0;
	cout<<"enter a number:"<<endl;
	cin>>n;
	while(n!=0){
		dig=n%10;
		rev=(rev*10)+dig;
		n=n/10;
	}
	cout<<"reverse="<<rev<<endl;
}
