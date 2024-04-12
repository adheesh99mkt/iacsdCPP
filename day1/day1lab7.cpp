/*7. Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
(Hint: a, e, i, o, u are vowels)*/

#include<iostream>
using namespace std;

int main(){
	char ltr;
	cout<<"enter the leter"<<endl;
	cin>>ltr;
	if(ltr=='a'||ltr=='e'||ltr=='i'||ltr=='o'||ltr=='u'){
		cout<<"vowels"<<endl;
	}
	else{
		cout<<"consonants"<<endl;
	}
}
