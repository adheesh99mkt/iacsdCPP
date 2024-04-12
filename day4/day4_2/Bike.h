#include<iostream>
#include"Vehicle.h"
using namespace std;

class Bike:public Vehicle{
	private:
//		int wheelno;
		string engine;
		
	public:
		Bike(){
			//wheelno=0;
			engine="None";
			cout<<"default bike"<<endl;
		}
		Bike(string category,string engine):Vehicle(category){
		
			this->engine=engine;
		}
		
		void Wheel(int wheelno){
			cout<<"Number of wheels: "<<wheelno<<endl;
		}
		void display(){
			Vehicle::display();
			cout<<"Engine type:"<<this->engine<<endl;
			
		}
};
