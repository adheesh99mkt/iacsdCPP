#include<iostream>
#include"EMP.h"
#include"MGR.h"
#include"WRKR.h"
using namespace std;






int main(){
	 MGR *mgr[5];
	 

MGR m1,m2,m3,m4,m5;
mgr[0]=&m1;
mgr[1]=&m2;
mgr[2]=&m3;
mgr[3]=&m4;
mgr[4]=&m5;
for(int i=0;i<5;i++){
	 	mgr[i]->acceptDetails();
	 }
for(int j=0;j<5;j++){
	mgr[j]->display();
}
//mgr[0]->display();
return 0;
}
