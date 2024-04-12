/*3:Create a abstract class Shape with pure virtual method area;
Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
Test these all classes by creating object of respective class.*/

#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void area()=0;
};
class Rect:public Shape{
	private:
		int l,b,A;
	public:
		void area(){
			cout<<"Enter the l and b:"<<endl;
			cin>>l>>b;
			A=l*b;
			cout<<"Area="<<A<<endl;
		}
};
class Circle:public Shape{
	int r,A;
	public:
		void area(){
			cout<<"Enter the r:"<<endl;
			cin>>r;
			A=3.14*r*r;
			cout<<"Area="<<A<<endl;
		}
};
class Square:public Shape{
	int l,A;
	public:
		void area(){
			cout<<"Enter the l:"<<endl;
			cin>>l;
			A=l*l;
			cout<<"Area="<<A<<endl;
		}
};

int main(){
	Circle c;
	Rect r;
	Square s;
	
	c.area();
	r.area();
	s.area();
}





































