/*6. Write a program, which accepts annual basic salary of an employee and calculates and displays the 
Income tax as per the following rules. 
Basic: < 1, 50,000 Tax = 0
 1, 50,000 to 3,00,000 Tax = 20% 
 > 3,00,000 Tax = 30% */
 
 #include<iostream>
 using namespace std;
 
 int main(){
 	float bs,tax;
 	cout<<"enter the anual basic salary"<<endl;
 	cin>>bs;
 	if(bs<150000){
 		tax=0;
	 }
	 else if(bs>150000 && bs<300000){
	 	tax=.20*bs;
	 }
	 else{
	 	tax=.30*bs;
	 }
	 cout<<"the tax="<<tax<<endl;
 }
