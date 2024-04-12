/*13:Check whether the number is palindrome or not?
*/
#include<iostream>
using namespace std;

int main(){
	int n,num,dig,rev;
	cout<<"enter the numbr:"<<endl;
	cin>>num;
	
	n=num;
	
	while(num!=0){
		dig=num%10;
		rev=(rev*10)+dig;
		num=num/10;
	}
	if(n==rev){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;
	}
}
