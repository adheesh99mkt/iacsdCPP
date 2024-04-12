/*Problem Statement: Extend the shape hierarchy example by implementing polymorphism. 
Define a base class Shape with methods to calculate area and perimeter. 
Then, create derived classes like Circle, Rectangle, and Triangle, each with its own implementation of these methods.*/

#include<iostream>

using namespace std;
class shape{
	private:
		int area,perimeter;
	public:
		
		void Area(int l,int b){
			this->area=l*b;
			
		}
		void display(){
			cout<<"Area="<<this->area<<endl;
		}
		
};
class circle:public shape{ 
	private:
		int r;
	public:
		circle(){
			r=10;
			cout<<"default circle"<<endl;
		}
		circle(int r){
			this->r=r;
			cout<<"parameterised circle"<<endl;
		}
		void acceptR(int r){
			this->r=r;
			cout<<"radius accepted"<<endl;
		}
};
int main(){
	circle c;
	circle c1(10);
	c.Area(10);
	c.display();
	
}
