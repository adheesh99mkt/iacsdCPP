/*Geometric Shapes with Polymorphism:
Problem Statement: Extend the shape hierarchy example by implementing polymorphism. 
Define a base class Shape with methods to calculate area and perimeter. 
Then, create derived classes like Circle, Rectangle, and Triangle, each with its own implementation of these methods.
*/

#include<iostream>
using namespace std;
#ifndef SHAPE_H
#define SHAPE_H
class GeometricShape{
	private:
		int area,perimeter;
		string shapename;
	public:
		Shape(){
			area=0;
			perimeter=0;
			shapename="Shapeless";
		}
		void Area(){
			cout<<"Area of shape"<<endl;
		}
		void Perimeter(){
			cout<<"perimeter of shape"<<endl;
		}
		
};
#endif

