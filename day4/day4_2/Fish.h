
#include"Animal.h"
using namespace std;

class Fish:public Animal{
	private:
		int length;
		int weight;
		string habitate;
		
	public:
		void size(){
			cout<<"Enter the lenghth of fish:";
			cin>>length;
			cout<<"\nEnter the weight of fish:";
			cin>>weight;
		}
		void LivingHabitate(){
			cout<<"Enter the habitate:";
			cin>>habitate;
			
		}
		void display(){
			Animal::display();
			cout<<"Length of fish:"<<length<<endl;
			cout<<"Weight of fish:"<<weight<<endl;
			cout<<"Habitate:"<<habitate<<endl;
		}
};
