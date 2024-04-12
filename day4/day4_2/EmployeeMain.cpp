#include<iostream>
#include"Employee.h"
#include"Manager.h"
#include"Developer.h"
using namespace std;

int main(){
	Manager m;
	m.acceptDetails();
	m.calcSalary();
	
	m.ManagerTask();
	
	
	Developer d;
	d.acceptDetails();
	d.calcSalary();
	
	d.project();

}
