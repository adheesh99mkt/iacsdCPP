//18:Write a program to find greatest of three numbers using nested if-else.

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"enter 3 numbers"<<endl;
	
cin>>a>>b>>c;
if(a>b&&a>c){
	cout<<"a greater"<<endl;
}
else if(b>a&&b>c){
	cout<<"b is greater"<<endl;
}
else{
	cout<<"c greatr"<<endl;
}
}
