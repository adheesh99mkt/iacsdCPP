/*Library Catalog with Books and Journals:
Problem Statement: Build a library catalog system. 
Create a base class LibraryItem with properties like title and author. 
Then, derive classes like Book and Journal, each with their unique properties. 
Implement methods to check out and return items in the derived classes.
*/

#include<iostream>
using namespace std;
#ifndef LIBRARY_H
#define LIBRARY_H

class Library{
	private:
		int itemId;
		string title,author;
		string member;
	public:
		Library(){
			itemId=0;
			title="None";
			author="None";
			member="None";
		}
		Library(int itemId,string title,string author,string member){
			this->itemId=itemId;
			this->title=title;
			this->author=author;
			this->member=member;
			cout<<"Parametrised Library/////"<<endl;
		}
		void ItemDetails(){
			cout<<"Enter the item ID:";
			cin>>itemId;
			cout<<"Enter the title:";
			cin>>title;
			cout<<"Enter the author name:";
			cin>>author;
			cout<<"Enter the name of person who taking book:";
			cin>>member;
		}
		void display(){
			cout<<"Member: "<<member<<endl;
			cout<<"Title: "<<title<<endl;
			cout<<"Item ID: "<<itemId<<endl;
			cout<<"Author: "<<author<<endl;
			
		}
		void date(int d,int m,int y){
			cout<<d<<"/"<<m<<"/"<<y;
		}
		
	
};
#endif
