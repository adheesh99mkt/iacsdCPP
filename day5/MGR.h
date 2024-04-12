#include<iostream>
#include"EMP.h"
using namespace std;



class MGR:public EMP{
	private:
			double perfBonus;
			double basic;
	
	public:
		MGR(){
			perfBonus=0;
		}
		MGR(int id,string name,int deptId,double basicSalary,double perfBonus):EMP(id,name,deptId,basicSalary){
			this->perfBonus=perfBonus;
			cout<<"parameterised MGR---"<<endl;
		}
		
		void computeNetSalary(){
			cout<<"enter the bonus for manager="<<endl;
			cin>>perfBonus;
			basic=getSalary()+perfBonus;
			cout<<"Net salary of manager="<<basic<<endl;
		}
		void acceptDetails(){
			EMP::acceptDetails();
			cout<<"enter the perf Bonus:";
			cin>>perfBonus;
		}
		void display(){
			EMP::display();
			cout<<"PERF BONUS-> "<<perfBonus<<endl;
			cout<<"NET SALARY-> "<<basic<<endl;
			cout<<"============================"<<endl;
		}	
		
};
