//14:Write a  program to find sum of all even and odd numbers between 1 to n. 
#include<iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"enter n"<<endl;
	cin>>n;
	int evenSum=0,oddSum=0;
	for(i=1;i<=n;i++){
		if(i%2==0){
			evenSum+=i;
		}
		else{
			oddSum+=i;
		}
	}
	cout<<"even sum="<<evenSum<<" odd sum="<<oddSum<<endl;
}
