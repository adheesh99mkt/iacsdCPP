#include<iostream>
#include"GeometricShape.h"
#include"GeometricCircle.h"
#include"GeometricRectangle.h"
#include"GeometricTriangle.h"

using namespace std;

int main(){
	GeometricCircle c;
	GeometricRectangle r;
	GeometricTriangle t;
	c.Area();
	c.Perimeter();
	cout<<"\n\n////////////////////////"<<endl;
	r.Area();
	r.Perimeter();
	cout<<"\n\n////////////////////////"<<endl;
	t.Area();
	t.Perimeter();
}


/*OUTPUT
enter the radius:10
Area=314
enter the radius:10
Perimeter=62


////////////////////////
Enter the length and breadth:10
10
Area=100
Enter the length and breadth:10
10
Perimeter=40


////////////////////////
Enter the height , base and hypotneous:10
10
10
Area=50
Enter the height , base and hypotneous:10
10
10
Perimeter=30

--------------------------------
Process exited after 26.99 seconds with return value 0
Press any key to continue . . .
*/
