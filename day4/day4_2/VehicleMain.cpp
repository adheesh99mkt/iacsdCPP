#include<iostream>
#include"Vehicle.h"
#include"Car.h"
#include"Bike.h"
#include"Truck.h"
#include<typeinfo>

using namespace std;

int main(){
	Vehicle *fun[4];
	Car c1("Car",4);
	Bike b1("Bike","petrol");
	Truck t1("Truck",8);
	
	fun[0]=&c1;
	fun[1]=&b1;
	fun[2]=&t1;
	
	for(int i=0;i<3;i++){
		
	fun[i]->display();
	
	if(typeid(*fun[i])==typeid(Car)){
		Car*c=dynamic_cast<Car*>(fun[i]);
		c->startEngine("petrol");
	}
	if(typeid(*fun[i])==typeid(Bike)){
		Bike*b=dynamic_cast<Bike*>(fun[i]);
		b->Wheel(2);	
	}
	
//	if(typeid(*fun[i])==typeid(Truck)){
//		Truck*t=dynamic_cast<Truck*>(fun[i]);
//		t->startEngine("Diesel");
//	}
cout<<"--------------------"<<endl;
  }
}


/*OUTPUT
Category: Car
Number of wheels:4
Engine type: petrol
--------------------
Category: Bike
Engine type:petrol
Number of wheels: 2
--------------------

--------------------------------
Process exited after 0.04248 seconds with return value 0
Press any key to continue . . .

*/
