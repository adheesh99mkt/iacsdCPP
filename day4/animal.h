/*Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. 
Start with a base class Animal and then create derived classes like Mammal, Bird, and Fish. 
Each of these derived classes should have specific properties and methods related to their respective categories of animals.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Animal{
	public:
		string name;
		int lifespan;
		int age;
		int legs;
		string region;
		string motion;
	public:
		Animal();
		Animal(string name,string region,string motion,int lifespan,int age,int legs);
	void acceptDetails(string name,string region,string motion,int lifespan,int age,int legs);
	void displayDetails();
	
	
};

