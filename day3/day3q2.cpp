/*1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. */

#include<iostream>
#include<string.h>
using namespace std;

class Person{
	private :char * name;
			int age;
			char * city;
			
	public:Person(){ //default constructor
		
		this->name=new char;
		*name='\0';
		this->age=18;
		this->city=new char;
		*city='\0';
		cout<<"person get created(default constr)"<<endl;
	}
	Person(char * name,int age,char * city){ //parameterised constructor
		this->name=new char[strlen(name)+1];
		this->age=age;
		this->city=new char[strlen(city)+1];
		cout<<"Person get created(parameterised constr)"<<endl;
	}
	void assigndetails(char * name,int age,char * city){
		this->name=new char[strlen(name)+1];
		strcpy(this->name,name);
		this->age=age;
		this->city=new char[strlen(city)+1];
		strcpy(this->city,city);
	}
	void display(){
		cout<<"		name=";
		for(int i=0;i<strlen(this->name);i++){
			cout<<*(name+i);
		}
		cout<<"		city=";
		for(int j=0;j<strlen(this->city);j++){
			cout<<*(city+j);
		}
		cout<<"		age="<<age<<endl;;
	}

	void setName(char* name){
		strcpy(this->name,name);
	}
	void setAge(int age){
		this->age=age;
	}
	void setCity(char* city){
		strcpy(this->city,city);
	}
	char* getName(){
		return this->name;
	}
	int getAge(){
		return this->age;
	}
	char* getCity(){
		return this->city;
	}
};


int main(){
	
	Person obj1;
	
	Person obj2("adheesh",24,"pune");
	obj2.assigndetails("adheesh",24,"pune");
	obj2.display();
	obj1.assigndetails("anu",23,"chennai");
	obj1.display();
	obj1.setName("anagha");
	obj1.setAge(24);
	obj1.setCity("kasargod");
	obj1.display();
	obj2.getName();
	obj2.getAge();
	obj2.getCity();
	obj2.display();
}
