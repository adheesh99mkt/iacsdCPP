/*Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. 
Start with a base class Animal and then create derived classes like Mammal, Bird, and Fish. 
Each of these derived classes should have specific properties and methods related to their respective categories 
of animals.
*/

#include<iostream>
using namespace std;
#ifndef ANIMAL_H
#define ANIMAL_H
class Animal{
	private:
		string name;
		int lifespan;
		string region;
	public:
		void acceptDetails(){
			cout<<"Enter the animal details"<<endl;
			cout<<"Name:";
			cin>>name;
			cout<<"\nLifespan:";
			cin>>lifespan;
			cout<<"\nRegion:";
			cin>>region;
			cout<<name<<" Details are added:"<<endl;
		}
		void display(){
			cout<<name<<" details-----"<<endl;
			cout<<"NAME of animal:"<<name<<endl;
			cout<<"LIFESPAN of animal:"<<lifespan<<endl;
			cout<<"REGION of animal:"<<region<<endl;
		}
	
};
#endif

