
#include"Animal.h"
using namespace std;

class Bird:public Animal{
	private:
		string color;
		
	public:
		void Charecterstics(){
			cout<<"Enter the color:";
			cin>>color;
			cout<<endl;
		}
		void display(){
			Animal::display();
			cout<<"Color:"<<color<<endl;
		}
};
