/*3:Write a program to swap two numbers.

*/

#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"enter the number A and B :"<<endl;
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swapping A="<<a<<" B="<<b<<endl;
}
