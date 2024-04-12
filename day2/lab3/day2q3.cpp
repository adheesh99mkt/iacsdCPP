//3:. Write a  program to find sum of all even and odd numbers between 1 to n. 
#include<iostream>
using namespace std;

int main(){
	int n,i;
	int sumE=0,sumO=0;
	cout<<"enter the number:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==0){
			sumE=sumE+i;
		}
		else{
			sumO+=i;
		}
	}
	cout<<"even sum="<<sumE<<"odd sum="<<sumO<<endl;
}
