/*Problem Statement: Design a system for managing bank accounts. 
Create a base class BankAccount with attributes like account number and balance. 
Derive classes like SavingsAccount and CheckingAccount, each with specialized methods like withdraw() and calculate_interest().
*/

#include<iostream>
using namespace std;

class BankAccount{
	private :
		string name;
		int accno;
		double balance;
	public:
		void acceptdetails(){
			cout<<"enter the name:";
			cin>>this->name;
			cout<<"		account no:";
			cin>>this->accno;
		}
		void withdraw(double amount){
			this->balance=this->balance-amount;
			cout<<"balance after withdraw :"<<this->balance<<endl;
		}
		void deposite(double amount){
			this->balance=this->balance+amount;
			cout<<"balance after deposite :"<<this->balance<<endl;
		}
		void calc_interest(float rate){
			this->balance=float(this->balance)+((float)this->balance*rate/100);
			cout<<"balance after adding interest :"<<this->balance<<endl;
			
		}
		void display(){
			cout<<"Name:"<<this->name<<endl;
			cout<<"Acc number:"<<this->accno<<endl;
			cout<<"Balance:"<<this->balance<<endl;
		}
		
		
};
class Savings:public BankAccount{
	private:
		int atmpin;
	public:
		void atm_withraw(double amount){
			
		}
	
};
class Checking:public BankAccount{
	
};
int main(){
	Savings s1;
	s1.acceptdetails();
	s1.deposite(10000);
	s1.display();
	s1.withdraw(4000);
	s1.display();
}
