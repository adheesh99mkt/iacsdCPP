//19:Create menu driven program for Pizza Shop.And display total amount,

#include<iostream>
using namespace std;

int main(){
	int amt,n,i,total=0;
	cout<<"the items available: 1 , 2, 3, 4"<<endl;
	cout<<"for entering into the shop enter 1"<<endl;
	cin>>n;
	cout<<"choose your items"<<endl;
	while(n!=0){
		cin>>n;
		switch(n){
			case 1:
				amt=100;
				break;
			case 2:
				amt=200;
				break;
			case 3:
				amt=300;
				break;
			case 4:
				amt=400;
				break;
			default:
				cout<<"thank you"<<endl;
		}
		total=total+amt;
		
	}
	cout<<"the total amount= "<<total;
	return 0;
	
}
