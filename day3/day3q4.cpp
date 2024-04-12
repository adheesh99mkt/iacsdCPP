/*4.Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */

#include<iostream>
#include<string.h>
using namespace std;

class Book{
	private :string bname;
			int id;
			string author;
			int price;
			
	public :Book(){
		this->bname="N/A";
		
		this->id=0;
		this->author="N/A";
		this->price=0;
		cout<<"default book details"<<endl;
	}
	Book(string bname,int id,string author,int price){
		this->bname=bname;
		this->id=id;
		this->author=author;
		this->price=price;
		cout<<"parameterised details of book"<<endl;
		
		
		
	}
	void acceptdetails(string bname,int id,string author,int price){
		this->bname=bname;
		//strcpy(this->bname,bname);
		this->id=id;
		this->author=author;
	//	strcpy(this->author,author);
		this->price=price;
		
	}
	void display(){
		cout<<"the entered details of book:"<<endl;
		cout<<"book name :"<<bname<<endl;
//		for(int i=0;i<strlen(this->bname);i++){
//			cout<<*(bname+i);
//		}
		cout<<""<<endl;
		cout<<"book id :"<<id<<endl;
		cout<<"book author :"<<author<<endl;
//		for(int j=0;j<strlen(this->author);j++){
//			cout<<*(author+j);
//		}
		cout<<""<<endl;
		cout<<"price :"<<price;
	}
};


int main(){
	Book b1;
	Book b2("Alchemist",10,"paulo coelo",100);
	b1.display();
	b2.display();
}
