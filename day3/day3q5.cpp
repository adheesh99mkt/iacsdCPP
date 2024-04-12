/*5. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. 
*/

#include<iostream>
using namespace std;

class Point{
	private: int x,y;
	
	public:	Point(){
		x=1;
		y=1;
		cout<<"default point"<<endl;
	}
	Point(int x,int y){
		this->x=x;
		this->y=y;
		cout<<"parameter point"<<endl;
	}
	void acceptPoint(int x,int y){
		this->x=x;
		this->y=y;
	}
	void display(){
		cout<<"the points are : ("<<this->x<<" , "<<this->y<<")"<<endl;
	}
	void setX(int x){
		this->x=x;
	}
	void setY(int y){
		this->y=y;
	}
	int getX(){
		return this->x;
	}
	int getY(){
		return this->y;
	}
};

int main(){
	Point p1;
	Point p2(10,10);
	p1.display();
	p2.display();
	p1.acceptPoint(20,20);
	p2.acceptPoint(30,30);
	int a=p1.getX();
int b=p2.getY();
cout<<a<<" "<<b;
p1.setX(100);
p1.setY(200);

	p1.display();
	p2.display();
}
