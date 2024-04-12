#include<iostream>
#include"Person.h"
#include"Student.h"
using namespace std;

int main(){
	Student s("Adheesh",24,3,6.9);
	s.display();
	
	cout<<"\n\n/////////////////"<<endl;
	
	Student s1;
	s1.studInput();
	s1.display();
	
}


/*OUTPUT
Parameterised Person/////
Parameterised Student/////
NAME: Adheesh
AGE: 24
STUDENT ID: 3
GPA: 6.9


/////////////////
Enter the name:Anagha
Enter the age:23
Enter the student ID:11
Enter the GPA:7.3
Student details are added/////
NAME: Anagha
AGE: 23
STUDENT ID: 11
GPA: 7.3

--------------------------------
Process exited after 27.29 seconds with return value 0
Press any key to continue . . .
*/
