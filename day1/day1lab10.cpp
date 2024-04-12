/*10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3
*/
#include<iostream>
using namespace std;

int main(){
	int m,n,i,pwr=1;
	cout<<"enter M and N"<<endl;
	cin>>m>>n;
	for(i=0;i<n;i++){
		pwr=pwr*m;
	}
	cout<<"result="<<pwr<<endl;
}
