#include<iostream>
#include"employee.h"
using namespace std;

Employee::Employee(){
	this->empId=100;
	name="anagha";
	salary=10000;
	cout<<"default employee"<<endl;
}
Employee::Employee(string name,int empId,double salary){
	this->name=name;
	this->empId=empId;
	this->salary=salary;
	cout<<"parameterised employee"<<endl;
}
void Employee::calSalary(){
	this->salary=salary;
	cout<<"salary="<<this->salary<<endl;
}
void Employee::display(){
	cout<<"name:"<<this->name<<"  emp ID :"<<this->empId<<"  salary : "<<this->salary<<endl;
}

