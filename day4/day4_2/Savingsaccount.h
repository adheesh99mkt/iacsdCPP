#include<iostream>
#include"Bankaccount.h"
using namespace std;

class Savingsaccount:public Bankaccount{
	private:
		double savings,amt,bal;
		float interest;
		
	public:
		Savingsaccount(){
			savings=0;
			interest=0;
		}
		Savingsaccount(int accNO,double balance,double savings,float interest):Bankaccount(accNO,balance){
			this->savings=savings;
			this->interest=interest;
			
		}
		void Withdraw(){
			
			cout<<"savings withdraw"<<endl;	
		}
		void calcInterest(){
			cout<<"savings interest"<<endl;
		}
		void display(){
			
			cout<<"savings display"<<endl;
		}
		
};
