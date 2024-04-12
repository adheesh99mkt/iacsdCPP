/*Problem Statement: Model a system for handling individuals and students within an educational institution. 
Create a base class Person with attributes like name and age. 
Derive a Student class with additional attributes like student ID and GPA, inheriting the 
common attributes from the Person class.
*/

#include<iostream>
using namespace std;

class Person{
	private:
		string name;
		int age;
	public:
		void setP(string name,int age){
			this->name=name;
			this->age=age;
		}
		void displayP(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			
		}
};
class Student:public Person{
	private:
		int id;
		string dept;
	public:
		void setS(){
			cout<<"Enter the student id:"<<id<<endl;
			cin>>id;
			cout<<"Enter the dept name: "<<dept<<endl;
			cin>>dept;
		}
		void displayS(){
			displayP();
			cout<<"ID: "<<id<<endl;
			cout<<"Department: "<<dept<<endl;
		}
};

int main(){
	Student s;
	s.setP("adheesh",24);
	s.setS();
	s.displayS();
}
