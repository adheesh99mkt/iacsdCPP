/*7. Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
operation. Continue this process until user selects exit option.*/

#include<iostream>
using namespace std;

int main(){
	int task,area;
	cout<<"enter the task"<<endl;
	cin>>task;
	switch(task){
		case 1:
			int r;
			cout<<"enter the radius"<<endl;
			cin>>r;
			area=3.14*r*r;
			break;
		case 2:
			int l,b;
			cout<<"enter length and breadth"<<endl;
			cin>>l>>b;
			area=l*b;
			break;
		case 3:
			int h;
			cout<<"enter base and height"<<endl;
			cin>>b>>h;
			area=1/2 *h*b;
			break;
		default:
			cout<<"exited"<<endl;
	}
	cout<<"area="<<area<<endl;
}
