#include<iostream>
#include"GeometricShape.h"

using namespace std;

class GeometricTriangle:public GeometricShape{
	int b,h,x,area,peri;
	public:
		void Area(){
			cout<<"Enter the height , base and hypotneous:";
			cin>>h>>b>>x;
			area=0.5*b*h;
			cout<<"Area="<<area<<endl;
		}
		void Perimeter(){
			cout<<"Enter the height , base and hypotneous:";
			cin>>h>>b>>x;
			peri=b+h+x;
			cout<<"Perimeter="<<peri<<endl;
		}
};
