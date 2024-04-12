//17:Write a program to check entered number is Armstrong number or not.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num,dig,n1,n2,sum=0;
	cout<<"enter the number"<<endl;
	cin>>num;
	
	n1=num;
	n2=num;
	int count=0;
	while(n1!=0){
		n1=n1/10;
		count++;
	}
	
	while(n2!=0){
		dig=n2%10;
		sum=sum+pow(dig,count);
		n2=n2/10;
		
	}
	if(sum==num){
		cout<<"armstrong"<<endl;
		
	}
	else{
		cout<<"not armstrong"<<endl;
	}
}
