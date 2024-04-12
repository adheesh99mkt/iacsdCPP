#include<iostream>
#include"Shape.h"

using namespace std;

class Rectangle:public Shape{
	private:
		int l,b,A,peri;
	public:
			
		void area(){	
			cout<<"enter the length and breadth:";
			cin>>l>>b;
			A=l*b;
			cout<<"Area of rectangle="<<A<<endl;	
		}
		void perimeter(){
			cout<<"enter the length and breadth:";
			cin>>l>>b;
			peri=2*(l+b);
			cout<<"Perimeter of rectangle="<<peri<<endl;
		}
};
