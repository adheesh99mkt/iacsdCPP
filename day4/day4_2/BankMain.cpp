#include<iostream>
#include"Bankaccount.h"
#include"Savingsaccount.h"
#include"Checkingaccount.h"
using namespace std;

int main(){
	
	Savingsaccount s(101,1000,20000,3.5);
	s.acceptDetails();
	s.Deposite(2000);
	s.Withdraw(4000);
	s.TotalSavings();
	s.display();
	
	Checkingaccount c;
	c.acceptDetails();
	c.Deposite(10000);
	c.Withdraw(5000);
	c.getbalance();
	c.display();
}

/*OUTPUT
Minimum balance is 5000!!!
Enter the account number:101
Enter the interest=2.5




Account number=101
Total balance=18500





Hello user
Enter the account number:123
Account number=123
Balance=5000

--------------------------------
Process exited after 13.28 seconds with return value 0
Press any key to continue . . .
*/
