#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"

using namespace std;

int main(){
	Circle c;
	
	c.area();
	c.perimeter();
	
	
	Rectangle R;
	
	R.area();
	R.perimeter();
//	
	Triangle t;
	
	t.area();
	t.perimeter();
}
