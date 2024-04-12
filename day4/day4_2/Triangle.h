#include<iostream>
#include<math.h>
#include"Shape.h"

using namespace std;

class Triangle:public Shape{
	private:
		float b,h,x,A,peri;
	public:
		
		void area(){
			cout<<"enter the base and height:";
			cin>>b>>h;
			A=0.5*(b*h);
			cout<<"Area of triangle="<<A<<endl;
		}
		void perimeter(){
			cout<<"enter the base , height and hypotneous:";
			cin>>b>>h>>x;
			peri=x+b+h;
			cout<<"Perimeter of triangle="<<peri<<endl;
		}
};
