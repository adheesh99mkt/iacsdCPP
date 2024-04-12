#include<iostream>
#include"GeometricShape.h"
using namespace std;

class GeometricCircle:public GeometricShape{
	int r,peri,area;
	public:
		void Area(){
			cout<<"enter the radius:";
			cin>>r;
			area=3.14*r*r;
			cout<<"Area="<<area<<endl;
		}
		void Perimeter(){
			cout<<"enter the radius:";
			cin>>r;
			peri=2*3.14*r;
			cout<<"Perimeter="<<peri<<endl;
		}
};
