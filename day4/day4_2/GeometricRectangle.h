#include<iostream>
#include"GeometricShape.h"
using namespace std;

class GeometricRectangle:public GeometricShape{
	int l,b,area,peri;
	public:
		void Area(){
			cout<<"Enter the length and breadth:";
			cin>>l>>b;
			area=l*b;
			cout<<"Area="<<area<<endl;
			
		}
		void Perimeter(){
			cout<<"Enter the length and breadth:";
			cin>>l>>b;
			peri=2*(l+b);
			cout<<"Perimeter="<<peri<<endl;
		}
};
