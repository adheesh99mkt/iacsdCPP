#include<iostream>
#include"Vehicle.h"
using namespace std;

class Truck:public Vehicle{
	private:
		int wheelno;
		string engine;
		
	public:
		Truck(){
			wheelno=0;
			engine="None";
			cout<<"default truck"<<endl;
		}
		Truck(string category,int wheelno):Vehicle(category){
			this->wheelno=wheelno;
			
			//cout<<"parameterised truck"<<endl;
		}
		void startEngine(string engine){
			cout<<"Engine type: "<<engine<<endl;
		}	
		
		void display(){
			Vehicle::display();
			
			cout<<"Number of wheels: "<<this->wheelno<<endl;
			
		}
//		
};
