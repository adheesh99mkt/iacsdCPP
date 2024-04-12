/*Vehicle Inheritance:
Problem Statement: Develop a class hierarchy for vehicles. 
Start with a base class Vehicle and create derived classes like Car, Motorcycle, and Truck.
Each derived class should have unique properties like the number of wheels and specific methods like start_engine().*/

#include<iostream>
using namespace std;
#ifndef VEHICLE_H
#define VEHICLE_H
class Vehicle{
	private:
		string category;
	public:
		Vehicle(){

			category="None";

			cout<<"default vehicle"<<endl;
		}
		Vehicle(string category){

			this->category=category;

			//cout<<"parameterised vehicle"<<endl;
		}
		void acceptDetails(){
			cout<<"Enter the category:";
			cin>>this->category;
			cout<<"details updated"<<endl;
			
		}
//		virtual void startEngine()=0;
//		virtual void Wheel()=0;
//		

		virtual void display(){
			cout<<"Category: "<<this->category<<endl;
			
		}
};
#endif
