#include<iostream>
#include "animal.h"
using namespace std;

class Mamal:public Animal{
	private:
		int pregnancyPeriod;
		int NoOfBaby;
		string food;
		string task;
	public:
		Mamal(){
			pregnancyPeriod=10;
			NoOfBaby=1;
			food='herbivorous';
			cout<<"default details of mamals!!!"<<endl;
		}
		Mamal(int pregnancyPeriod,int NoOfBaby,string food):Animal(name,region,motion,lifespan,age,legs){
			this->pregnancyPeriod=pregnancyPeriod;
			this->NoOfBaby=NoOfBaby;
			this->food=food;
			cout<<"parameterised details of mamals!!!"<<endl;
		}
		void TaskMamal(string task){
			this->task=task;
			//cout<<"Task : "<<task<<endl;
			
		}
		void Foodhabit(string food){
			this->food=food;
		}
		void Pregnancy(int pregnancyPeriod,int NoOfBaby){
			this->pregnancyPeriod=pregnancyPeriod;
			this->NoOfBaby=NoOfBaby;
		}
		
		void displayMamal(){
			cout<<"Task : "<<this->task<<endl;
			cout<<"Food habit : "<<this->food<<endl;
			cout<<"Pregnancy period : "<<this->pregnancyPeriod<<endl;
			cout<<"Number of babies in delivery : "<<this->NoOfBaby<<endl;
		}
};


using namespace std;

int main(){
	Animal a1;
	Animal a2("Lion","africa","walking",20,15,4);
	a1.displayDetails();
	a2.displayDetails();
	Mamal m1;
	
	m1.acceptDetails("dog","india","running",8,4,4);
	m1.displayDetails();
	m1.displayMamal();
	m1.Foodhabit("carnivorous");
	m1.displayDetails();
	m1.displayMamal();
}
