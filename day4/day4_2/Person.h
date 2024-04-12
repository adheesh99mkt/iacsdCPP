/*Person and Student Inheritance:
Problem Statement: Model a system for handling individuals and students within an educational institution. 
Create a base class Person with attributes like name and age. 
Derive a Student class with additional attributes like student ID and GPA, 
inheriting the common attributes from the Person class.*/

#include<iostream>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person{
	private:
		string name;
		int age;
	public:
		Person(){
			name="NONE";
			age=0;
		}
		Person(string name,int age){
			this->name=name;
			this->age=age;
			cout<<"Parameterised Person/////"<<endl;
			
		}
		void acceptDetails(){
			cout<<"Enter the name:";
			cin>>this->name;
			cout<<"Enter the age:";
			cin>>this->age;
			
		}
		void display(){
			cout<<"NAME: "<<this->name<<endl;
			cout<<"AGE: "<<this->age<<endl;
		}
		string getName(){
			return this->name;
		}
		int getAge(){
			return this->age;
		}
};
#endif
