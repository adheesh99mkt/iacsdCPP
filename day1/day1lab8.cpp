/*8. Write a  program to input angles of a triangle and check whether triangle is valid or not.*/

#include<iostream>
using namespace std;

int main(){
	int a1,a2,a3;
	cout<<"enter the angle:"<<endl;
	cin>>a1>>a2>>a3;
	if(a1+a2+a3==180){
		cout<<"triangle is valid"<<endl;
	}
	else{
		cout<<"not valid"<<endl;
	}
}
