#include<iostream>
#include"EMP.h"
using namespace std;

class WRKR:public EMP{
	private:
			int hoursWorked;
			double hourlyRate;
			double basic;
	public:
		WRKR(int id,string name,int deptId,double basicSalary,int hoursWorked,double hourlyRate):EMP(id,name,deptId,basicSalary){
			this->hoursWorked=hoursWorked;
			this->hourlyRate=hourlyRate;
			cout<<"parameterised WRKR---"<<endl;
		}
		void computeNetSalary(){
			
			basic=getSalary()+(this->hoursWorked*this->hourlyRate);
			cout<<"Net salary of worker="<<basic<<endl;
		}
		void acceptDetails(){
			EMP::acceptDetails();
			cout<<"enter the hours worked by the worker="<<endl;
			cin>>this->hoursWorked;
			cout<<"enter the hourly rate of worker="<<endl;
			cin>>this->hourlyRate;
		}
		double getHourlyRate(){
			return (this->hoursWorked*this->hourlyRate);
		}
};
