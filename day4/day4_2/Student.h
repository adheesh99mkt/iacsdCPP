#include<iostream>
#include"Person.h"
using namespace std;

class Student:public Person{
	private:
		int studId;
		float gpa;
	public:
		Student(){
			studId=0;
			gpa=0.0;
		}
		Student(string name,int age,int studId,float gpa):Person(name,age){
			this->studId=studId;
			this->gpa=gpa;
			cout<<"Parameterised Student/////"<<endl;
		}
		void studInput(){
			acceptDetails();
			cout<<"Enter the student ID:";
			cin>>studId;
			cout<<"Enter the GPA:";
			cin>>gpa;
			cout<<"Student details are added/////"<<endl;
		}
		void display(){
			Person::display();
			cout<<"STUDENT ID: "<<studId<<endl;
			cout<<"GPA: "<<gpa<<endl;
		}
};
