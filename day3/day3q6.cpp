/*6. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors.
 Write getters and setters for all the data members. Also add the display function. 
 Create the object of this class in main method and invoke all the methods in that class.*/
 
 #include<iostream>
using namespace std;

class complexNumber{
	private: int i,r;
	public: complexNumber(){
		i=1;
		r=1;
	}
	complexNumber(int i,int r){
		this->i=i;
		this->r=r;
		cout<<"default"<<endl;
	}
	void setI(int i){
		this->i=i;
	}
	void setR(int r){
		this->r=r;
	}
	int getI(){
		return this->i;
	}
	int getR(){
		return this->r;
	}
	void acceptNumber(int i,int r){
		this->i=i;
		this->r=r;
	}
	void display(){
		cout<<"the complex number="<<i<<"!"<<"+"<<r<<endl;
	}
};
int main(){
	complexNumber obj1;
	complexNumber obj2(2,3);
	obj1.display();
	obj2.display();
}
