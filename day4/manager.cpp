#include<iostream>
#include"employee.h"
using namespace std;

class Manager:public Employee{
	private:
		string dept;
		int experience;
	public:
		Manager(){
			dept="java";
			experience=10;
			cout<<"default manager"<<endl;
		}
		Manager(string name,int empId,double salary,string dept,int experience):Employee(name,empId,salary){
			this->dept=dept;
			this->experience=experience;
			cout<<"parameterised manager"<<endl;
		}
		
};
