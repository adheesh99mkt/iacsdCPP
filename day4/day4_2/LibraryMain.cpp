#include<iostream>
#include"Library.h"
#include"Book.h"
#include"Journal.h"

using namespace std;

int main(){
	Book b;
	b.ItemDetails();
	b.Checkout();
	b.Return();
	b.display();
	
	Journal j;
	j.ItemDetails();
	j.Checkout();
	j.Return();
	j.display();
}

/*OUTPUT
Enter the item ID:101
Enter the title:Alchemist
Enter the author name:Palo
Enter the name of person who taking book:Adheesh
Enter the checkout date:10
03
2024
Enter the return date:18
03
2024
Member: Adheesh
Title: Alchemist
Item ID: 101
Author: Palo
Checkout date: 10/3/2024Return date: 18/3/2024Enter the item ID:102
Enter the title:Indianhistory
Enter the author name:Boss
Enter the name of person who taking book:Adheesh
Enter the checkout date:10
10
2009
Enter the return date:20
05
2012
Member: Adheesh
Title: Indianhistory
Item ID: 102
Author: Boss
Checkout date: 10/10/2009Return date: 20/5/2012
--------------------------------
Process exited after 115.4 seconds with return value 0
Press any key to continue . . .
*/
