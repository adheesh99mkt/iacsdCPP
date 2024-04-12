//16:Write a  program to print all Prime numbers between 1 to n. 

#include<iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(i=2;i<=n;i++){
		for(int j=3;j<i;j++){
			if(i%j==0){
				break;
			}
			else{
				cout<<i<<" ";
			}
		}
	}
}
