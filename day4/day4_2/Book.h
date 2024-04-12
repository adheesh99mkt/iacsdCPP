#include<iostream>
#include"Library.h"
using namespace std;

class Book:public Library{
	private:
		int dc,mc,yc,dr,mr,yr;
	public:
		Book(){
			dc=0;mc=0;yc=0;
		}
		Book(int itemId,string title,string author,string member,int dc,int mc,int yc):Library(itemId,title,author,member){
			this->dc=dc;
			this->mc=mc;
			this->yc=yc;
			cout<<"Parameterised Book/////"<<endl;
		}
		void Checkout(){
			cout<<"Enter the checkout date:";
			cin>>dc>>mc>>yc;
			
		}
		void Return(){
			cout<<"Enter the return date:";
			cin>>dr>>mr>>yr;
			
		}
		void display(){
			Library::display();
			cout<<"Checkout date: ";
			Library::date(dc,mc,yc);
			cout<<"\n"<<endl;
			
			cout<<"Return date: ";
			Library::date(dr,mr,yr);
			cout<<"\n\n///////////////"<<endl;
		}
};
