#include<iostream>
using namespace std;

class Stack{
	private:
	
		
		int num;
		int top=-1;
	
		int stackarr[5];
	public:
		void push(int num){
			
			try{
				if(top>4){
					throw 1;
				}
				else{
					
					stackarr[++top]=num;
					
				}
			}
			catch(int no){
				cout<<"stack overflow exception"<<endl;
		}
		catch(...){
			cout<<"exception occured"<<endl;
		}
		
		}
		int pop(){
			try{
				if(top<0){
					throw 1;
				}
				else{
					num=stackarr[top--];
					
				}
				
			}
			catch(int n){
				cout<<"stack empty exception"<<endl;
			}
			catch(...){
				cout<<"exception occured"<<endl;
			
			}
			return num;
		}
		void display(){
			cout<<"\n\ntop="<<top;
			if(top>-1){
				cout<<"\n\nStack elements: ";
				for(int i=0;i<top;i++){
					cout<<stackarr[i]<<" ";
				}
			}
		}
		
};

int main(){
	
	Stack s;
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
//	s.push(90);
		
	s.display();
//	
	int num2=s.pop();
	int num3=s.pop();
	int num4=s.pop();
	int num5=s.pop();
	//int num6=s.pop();
//	int num7=s.pop();

//int num8=s.pop();

	cout<<num5<<endl;
	s.display();
	
	
}
