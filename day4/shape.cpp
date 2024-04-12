/*Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. 
Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. 
Each shape should have methods for calculating area and perimeter specific to its geometry.*/

#include<iostream>
using namespace std;

class Shape{
	public:
		string shapename;
		int area,r,l,b,base,h,s1,s2;
		int circumference;
		
		Shape(){
			shapename="shapeless";
			area=0;
			circumference=0;
			cout<<"__________default details of shape__________"<<endl;
		}
		Shape(string shapename){
			this->shapename=shapename;
			cout<<"__________parameterised details of shape__________"<<endl;
		}
		void circleArea(int r){
			this->r=r;
			this->area=3.14*this->r*this->r;
		}
		void rectArea(int l,int b){
			this->l=l;
			this->b=b;
			this->area=this->l*this->b;
		}
		void triArea(int base,int h){
			this->h=h;
			this->base=base;
			this->area=0.5*this->base*this->h;
		}
		
		
		void display(){
			cout<<"shape="<<this->shapename<<endl;
			cout<<"area="<<this->area<<endl;
		}
};
class circle:public Shape{
	private:
		int r;
	public:
		circle(){
			r=0;
		}
		circle(int r){
			this->r=r;
		}

};
class rectangle:public Shape{
	private:
		int l,b;
	public:
		rectangle(){
			l=0;
			b=0;
		}
		rectangle(int l,int b){
			this->l=l;
			this->b=b;
		}
};
class triangle:public Shape{
	private:
		int base,h,s1,s2;
};

int main()
{
	Shape s1;
	Shape s2("circle");
	s1.circleArea(2);
	s1.display();
	s2.display();
}
