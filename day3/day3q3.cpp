/*2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. 

*/

#include<iostream>
using namespace std;

class Date{
	private :int day,month,year;
	public :Date(){
		day=01;
		month=01;
		year=2024;
	}
	Date(int day,int month,int year){
		this->day=day;
		this->month=month;
		this->year=year;
	}
	void acceptdate(int day,int month,int year){
		this->day=day;
		this->month=month;
		this->year=year;
	}
	void display(){
		cout<<"Date : "<<day<<"/"<<month<<"/"<<year<<endl;
	}
	void setDay(int day){
		this->day=day;
	}
	void setMonth(int month){
		this->month=month;
	}
	void setYear(int year){
		this->year=year;
	}
	int getDay(){
		return this->day;
	}
	int getMonth(){
		return this->month;
	}
	int getYear(){
		return this->year;
	}
};


int main(){
	Date d1;
	Date d2(03,02,2000);
	d1.display();
	d2.display();
	d1.acceptdate(21,02,2001);
	d1.display();
}
