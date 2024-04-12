
//4:. Write a  program to print all Prime numbers between 1 to n. 

#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	bool flag=false;
	cout<<"enter the n"<<endl;
	cin>>n;
	cout<<"prime numbers:"<<endl;
	for(i=1;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				flag=false;
				break;
			}
			else{
				flag=true;
			}
		}
		if(flag){
			cout<<i<<endl;
		}
		
	}
	
	return 0;
}

