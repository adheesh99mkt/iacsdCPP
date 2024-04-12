/* 6:Write a program to print following pattern.
*
* *
* * *
* * * *
* * * * *
*/

#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	cout<<"enter num="<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
