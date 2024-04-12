#include<iostream>
#include"Bankaccount.h"
using namespace std;

class Checkingaccount:public Bankaccount{
	int accno;
	public:
		Checkingaccount(int accno){
			this->accno=accno;
			cout<<"\n\n\nHello user"<<endl;
		}
		void Withdraw(){
			cout<<"checking withdraw"<<endl;
		}
		void calcInterst(){
			cout<<"checking interest"<<endl;
		}
		
		void display(){
			cout<<"checking display"<<endl;
		}
		
};
