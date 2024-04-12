//3. Write a program to accept a character, an integer n and display the next n characters.
#include<iostream>
using namespace std;

int main(){
	char c;
	int n,i;
	cout<<"enter char and number"<<endl;
	cin>>c>>n;
	
	int N=(int)c;
	int newN=n+N;
	for(i=N+1;i<=newN;i++){
		cout<<(char)i<<" ";
	}
}
