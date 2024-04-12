#include<iostream>
using namespace std;
#ifndef EMP_H
#define EMP_H
class EMP{
	private:
			int id;
			string name;
			int deptId;
			double basicSalary;
	
	public:
		EMP(){
			id=0;
			name="None";
			deptId=0;
			basicSalary=0;
		}
		EMP(int id,string name,int deptId,double basicSalary){
			this->id=id;
			this->name=name;
			this->deptId=deptId;
			this->basicSalary=basicSalary;
			cout<<"parameterised EMP---"<<endl;
		}
		void acceptDetails(){
			cout<<"enter the employee ID:";
			cin>>id;
			cout<<"enter the name:";
			cin>>name;
			cout<<"Dept ID:";
			cin>>deptId;
			cout<<"enter the basic salary:";
			cin>>basicSalary;
		}
		double computeNetSalary(){
			cout<<"Net salary of employee="<<basicSalary;
			
		}
		double getSalary(){
			return this->basicSalary;
		}
		void display(){
			cout<<"EMP ID-> "<<id<<endl;
			cout<<"NAME-> "<<name<<endl;
			cout<<"DEPT ID-> "<<deptId<<endl;
			cout<<"BASIC SALARY-> "<<basicSalary<<endl;
		}
};

#endif






