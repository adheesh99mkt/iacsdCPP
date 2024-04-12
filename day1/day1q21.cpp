/*21. Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the 
corresponding operation and displays the result.*/

#include<iostream>
using namespace std;

int main(){
	int a,b,res;
	char opt;
	cout<<"enter the numbers"<<endl;
	cin>>a>>b;
	cout<<"enter the operator"<<endl;
	cin>>opt;
	
	
	switch(opt){
		case '+':
			res=a+b;
			break;
		case '-':
			res=a-b;
			break;
		case '*':
			res=a*b;
			break;
		case '/':
			res=a/b;
			break;
		default:
			cout<<"wrong operation"<<endl;
	}
	cout<<"result = "<<res<<endl;
}
