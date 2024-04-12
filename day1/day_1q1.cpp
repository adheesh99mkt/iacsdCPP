#include<iostream>
using namespace std;
int isPrime(int);
int main()
{
	int n1,n2,i,j,flag;
	cout<<"enter the range n1 and n2:"<<endl;
	cin>>n1>>n2;
	
	for(i=n1;i<=n2;i++){
		if(isPrime(i)==1){
			cout<<i<<" ";
		}
		
	
	}
}
int isPrime(int number){
	int i;

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
