#include<iostream>
#include"Animal.h"
#include"Mamal.h"
#include"Fish.h"
#include"Bird.h"
using namespace std;

int main(){
	Animal a1;
	Fish f1;
	Mamal m1;
	Bird b1;

	
	m1.acceptDetails();
	m1.PhysicalApperence();
	m1.display();
	
}

/*OUTPUT
Enter the animal details
Name:Lion

Lifespan:30

Region:africa
Lion Details are added:
Enter No of Legs:4

Enter No of Breast:6
Lion details-----
NAME of animal:Lion
LIFESPAN of animal:30
REGION of animal:africa
Number of legs:4
Number of breast:6

--------------------------------
Process exited after 18.29 seconds with return value 0
Press any key to continue . . .
*/
