#include<iostream>
#include<string.h>
#include "animal.h"

using namespace std;

Animal::Animal(){
	name="Human";
	region="whole";
	motion="walking";
	lifespan=70;
	age=0;
	legs=2;
	cout<<"default details added!!!"<<endl;
}
Animal::Animal(string name,string region,string motion,int lifespan,int age,int legs){
	this->name=name;
	this->region=region;
	this->motion=motion;
	this->lifespan=lifespan;
	this->age=age;
	this->legs=legs;
	cout<<"parameterised details added!!!"<<endl;
}

void Animal::acceptDetails(string name,string region,string motion,int lifespan,int age,int legs){
	this->name=name;
	this->region=region;
	this->motion=motion;
	this->lifespan=lifespan;
	this->age=age;
	this->legs=legs;
	cout<<"details added successfully!!!"<<endl;
}
void Animal::displayDetails(){
	cout<<"the details about the animal-->"<<endl;
	cout<<"Name of the animal : "<<this->name<<endl;
	cout<<"Region : "<<this->region<<endl;
	cout<<"Motion : "<<this->motion<<endl;
	cout<<"Life span : "<<this->lifespan<<endl;
	cout<<"Age : "<<this->age<<endl;
	cout<<"Number of Legs : "<<this->legs<<endl;
}
