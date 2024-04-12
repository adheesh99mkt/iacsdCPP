/*2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)

2.3: Create object of account class and test withdraw and deposit methods.*/
#include<iostream>
using namespace std;

class BankAccount{
	private:
		int accNo;
		string custName;
		double balance;
	public:
		BankAccount(){
			accNo=0;
			custName="None";
			balance=0;
		}
		BankAccount(int accNo,string custName,double balance){
			this->accNo=accNo;
			this->custName=custName;
			this->balance=balance;
		}
		void CreateAccount(){
			cout<<"Enter the name:";
			cin>>custName;
			cout<<"Enter account number:";
			cin>>accNo;
			cout<<"Minimum balance is 5000!"<<endl;
			
		}
		void deposite(int amount){
			this->balance=this->balance+amount;
		}
		void withdraw(int amount){
			double am=this->balance-amount;
			if(am>=5000){
				this->balance=this->balance-amount;
			}
			
		}
		void display(){
			cout<<"Name:"<<custName<<endl;
			cout<<"Account number:"<<accNo<<endl;
			cout<<"Balance:"<<balance<<endl;
		}
};
int main(){
	BankAccount b;
	BankAccount b1(101,"Adheesh",5000);
	
	b.CreateAccount();
	b.deposite(10000);
	b.withdraw(3000);
	b.display();
	b1.display();
}
