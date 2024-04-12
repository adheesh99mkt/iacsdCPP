#include<iostream>
#include"Employee.h"

using namespace std;

class Developer:public Employee{
	private:
		int projId;
		double salary,bonus;
		
	public:
		
		void project(){
			cout<<"enter the project id:";
			cin>>projId;
			if(projId!=0){
				cout<<"enter the bonus for developer:"<<endl;
				cin>>this->bonus;
				cout<<"developer is workin in project with id:"<<projId<<endl;
			}
			else{
				this->bonus=0;
				cout<<"developer has no project now ,So no bonus applied"<<endl;
				
				
			}
		}
};
