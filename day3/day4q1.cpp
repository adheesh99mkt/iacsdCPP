/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/

#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		double m1,m2,m3,total;
		float avg,perc;
		string name;
		
		
	public:
		void acceptDetails(){
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the roll number:";
			cin>>rollno;
			cout<<"Enter the marks:"<<endl;
			cin>>m1>>m2>>m3;
			cout<<"Student Details are uploaded!!!"<<endl;
		}
		void Display(){
			cout<<"Student details----"<<endl;
			cout<<"NAME:"<<name<<endl;
			cout<<"ROLL NO:"<<rollno<<endl;
			cout<<"MARK 1:"<<m1<<endl;
			cout<<"MARK 2:"<<m2<<endl;
			cout<<"MARK 3:"<<m3<<endl;
			cout<<"TOTAL:"<<total<<endl;
			cout<<"AVERAGE:"<<avg<<endl;
			cout<<"PERCENTAGE:"<<perc<<endl;
			
		}
		void Calculations(){
			total=m1+m2+m3;
			avg=total/3;
			perc=(total/300)*100;
		}
		
};

int main(){
	Student s1;
	s1.acceptDetails();
	s1.Calculations();
	s1.Display();
}
