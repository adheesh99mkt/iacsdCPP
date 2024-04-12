/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/


#include<iostream>
using namespace std;

class student{
	private: int rollno;
	int m1,m2,m3;
	double total;
	float perc;
	char grade;
	
	public: void acceptinfo(){
		cout<<"enter the student details"<<endl;
		cout<<"enter the roll number"<<endl;
		cin>>rollno;
		cout<<"enter the marks:"<<endl;
		cin>>m1>>m2>>m3;
		
	}
	void display(){
		cout<<"student details"<<endl;
		cout<<"roll number="<<rollno<<endl;
		cout<<"total marks="<<total<<endl;
		cout<<"percentage="<<perc<<endl;
		cout<<"grade="<<grade<<endl;
	}
	void Total(){
		total=m1+m2+m3;
	}
	void percentage(){
		perc=(total/300)*100;
	}
	void Grade(){
		if(perc>=80){
			grade='A';
		}
		else if(perc<80 && perc>=60){
			grade='B';
			
		}
		else{
			grade='C';
		}
	}
};
int main(){
	student obj1;
	obj1.acceptinfo();
	obj1.Total();
	obj1.percentage();
	obj1.Grade();
	obj1.display();
}
