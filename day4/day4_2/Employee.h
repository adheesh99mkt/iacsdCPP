/*Employee Inheritance:
Problem Statement: Build a system for managing employees. 
Create a base class Employee with attributes such as name, employee ID, and salary. 
Then, derive classes like Manager and Developer, each with its own attributes and methods. 
Implement a common method, like calculate_salary(), in the base class.*/

#include<iostream>
using namespace std;
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee{
	
	private:
		int empid;
		double salary;
	public:
		void acceptDetails(){
			cout<<"enter the employee details---"<<endl;
			cout<<"enter employee id:";
			cin>>empid;
			cout<<"enter salary:";
			cin>>salary;
			cout<<"employee details are added!!!"<<endl;
		}
		void calcSalary(){
			cout<<"salary="<<salary<<endl;
		}
		double getSalary(){
			return salary;
		}
	
};
#endif
