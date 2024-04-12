/*Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. 
Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. 
Each shape should have methods for calculating area and perimeter specific to its geometry.
*/

#include<iostream>
using namespace std;
#ifndef SHAPE_H
#define SHAPE_H
class Shape{

	public:
		virtual void area()=0;
		virtual void perimeter()=0;
		
};
#endif

