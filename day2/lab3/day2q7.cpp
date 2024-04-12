/*7:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/

#include<iostream>
using namespace std;

class student{
	private: int rollno;
	int m1,m2,m3;
	float total,perc;
	char grade;
	
	public: void acceptinfo(){
		cout<<"enter the roll number:"<<endl;
		cin>>rollno;
		cout<<"enter the marks:"<<endl;
		cin>>m1>>m2>>m3;
		total=(float)(m1+m2+m3);
		perc=total/100 *100;
		if(perc>80){
			grade='A';
		}
		else if(perc>60 && perc<80){
			grade='B';
		}
		else{
			grade='C';
		}
		
	}
	void display(){
		cout<<"student details"<<endl;
		cout<<"roll number="<<rollno<<endl;
		cout<<"total marks="<<total<<endl;
		cout<<"percentage="<<perc<<endl;
		cout<<"grade="<<grade<<endl;
	}
};
int main(){
	student obj;
	obj.acceptinfo();
	obj.display();
	student obj2;
	obj2.acceptinfo();
	
}
