/*2. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class Person{
	private:
		string name,city;
		int age;
	
	public:
		void acceptDetails(string name,int age,string city ){
			this->name=name;
			this->age=age;
			this->city=city;
			cout<<"Person details are uploaded"<<endl;
		}
		void setName(string name){
			this->name=name;
		}
		void setAge(int age){
			this->age=age;
		}
		void setCity(string city){
			this->city=city;
		}
		string getName(){
			return this->name;
		}
		int getAge(){
			return this->age;
		}
		string getCity(){
			return this->city;
		}
		void display(){
			cout<<"Person Details----"<<endl;
			cout<<"Name:"<<this->name<<endl;
			cout<<"Age:"<<this->age<<endl;
			cout<<"City:"<<this->city<<endl;
		}
};

int main(){
	Person p1;
	p1.acceptDetails("adheesh",24,"Kanhangad");
	p1.display();
}
