/*Employee Inheritance:
Problem Statement: Build a system for managing employees. 
Create a base class Employee with attributes such as name, employee ID, and salary. 
Then, derive classes like Manager and Developer, each with its own attributes and methods. 
Implement a common method, like calculate_salary(), in the base class.*/

#include<iostream>
using namespace std;

class Employee{
	private:
		int empId;
		string name;
		double salary;
	public:
		Employee();
		Employee(string name,int empId,double salary);
	void calSalary();
	void display();
};
