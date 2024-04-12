#include<iostream>
#include"Employee.h"
using namespace std;

class Manager:public Employee{
	private:
		int deptid;
		double incentive;
	public:
		
		void ManagerTask(){
			cout<<"manager task done"<<endl;
		}
		
};
