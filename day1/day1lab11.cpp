/*11:Check if number is a prime number or not.: 
*/
#include<iostream>
using namespace std;

int main(){
	int num,i;
	bool flag;
	cout<<"enter number"<<endl;
	cin>>num;
	for(i=2;i<num;i++){
		if(num%i==0){
			flag=false;
			break;
		}
		else{
			flag=true;
		}
	}
	if(flag){
		cout<<"prime"<<endl;
	}
	else{
		cout<<"not prime"<<endl;
	}
}
