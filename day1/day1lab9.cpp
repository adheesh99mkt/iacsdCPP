/*9:Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120*/

#include<iostream>
using namespace std;

int main(){
	int num,i;
	int fact=1;
	cout<<"enter a number"<<endl;
	cin>>num;
	for(i=1;i<=num;i++){
		fact=i*fact;
	}
	cout<<"factorial="<<fact<<endl;
}
