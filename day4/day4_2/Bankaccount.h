/*Bank Account Inheritance:
Problem Statement: Design a system for managing bank accounts. 
Create a base class BankAccount with attributes like account number and balance. 
Derive classes like SavingsAccount and CheckingAccount, 
each with specialized methods like withdraw() and calculate_interest().*/



#include<iostream>
using namespace std;

#ifndef BANK_H
#define BANK_H

class Bankaccount{
	private:
		int accNO;
		double balance;
		
	public:
		Bankaccount(){
			accNO=0;
			balance=0;
		}
		Bankaccount(int accNo,double balance){
			
			this->accNO=accNO;
			if(balance>=5000){
				this->balance=balance;
			}
			else{
				cout<<"Minimum balance is 5000!!!"<<endl;
			}
			
		}
		void acceptDetails(){
			cout<<"Enter the account number:";
			cin>>accNO;
		}
		virtual void Withdraw(){
			cout<<"withhhhh"<<endl;
		}
		virtual void calcInterest(){
			cout<<"intrrrss"<<endl;
		}
};
#endif
