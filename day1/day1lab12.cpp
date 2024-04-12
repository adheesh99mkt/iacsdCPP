/*12:Sum of series :
	1+2+3+….+n
*/

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"enter number"<<endl;
	cin>>num;
	int i,sum=0;
	for(i=1;i<=num;i++){
		sum=sum+i;
	}
	cout<<"sum="<<sum<<endl;
}
