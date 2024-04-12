//5. Write a program to calculate factors of a given number.

#include<iostream>
using namespace std;

int main(){
	int num,i;
	cout<<"enter the number"<<endl;
	cin>>num;
	cout<<"factors"<<endl;
	for(i=1;i<=num;i++){
		if(num%i==0){
			cout<<i<<" ";
		}
	}
}
