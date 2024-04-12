/*6. Accept two numbers and calculate GCD of them.*/

#include<iostream>
using namespace std;

int main(){
	int num1,num2,i,gcd;
	cout<<"enter the numbers"<<endl;
	cin>>num1>>num2;
	for(i=1;i<=num1&&i<=num2;i++){
		if(num1%i==0&&num2%i==0){
			gcd=i;
		}
	}
	cout<<"gcd="<<gcd<<endl;
}
