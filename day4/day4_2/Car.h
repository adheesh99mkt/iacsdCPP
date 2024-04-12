#include<iostream>
#include"Vehicle.h"

using namespace std;

class Car:public Vehicle{
	private:
		int wheelno;
//		string engine;
	public:
		Car(){
			wheelno=0;
			//engine="None";
			cout<<"default car"<<endl;
		}
		Car(string category,int wheelno):Vehicle(category){
			this->wheelno=wheelno;
		
		}

		void startEngine(string engine){
			
			cout<<"Engine type: "<<engine<<endl;
		}
		
	
		
		void display(){
			Vehicle::display();
			cout<<"Number of wheels:"<<this->wheelno<<endl;
		}
};
