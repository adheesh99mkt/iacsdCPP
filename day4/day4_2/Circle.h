#include<iostream>
#include"Shape.h"
using namespace std;

class Circle:public Shape{
	private:
		int r,A,peri;
		
	public:
		void area(){
			
			cout<<"enter the radius:";
			cin>>r;
			A=3.14*r*r;
			cout<<"Area of circle="<<A<<endl;
		}
		void perimeter(){
			
			peri=2*3.14*r;
			cout<<"Perimeter of circle="<<peri<<endl;
			
		}
};
