
#include"Animal.h"
using namespace std;

class Mamal:public Animal{
	private:
		int NoLegs;
		int NoBreast;
		
	public:
		void PhysicalApperence(){
			cout<<"Enter No of Legs:";
			cin>>NoLegs;
			cout<<"\nEnter No of Breast:";
			cin>>NoBreast;
		}
		void display(){
			Animal::display();
			cout<<"Number of legs:"<<NoLegs<<endl;
			cout<<"Number of breast:"<<NoBreast<<endl;
		}
};
