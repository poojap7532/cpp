#include<iostream>

//2. WAP to find leap years from 2000 to 3000.

using namespace std;

int main(){
  int  i=2000;
  
  for(i=2000; i<=3000; i++){
  	if(i%4==0){
  		cout<<"leap year : "<<i;
	}
  	else {
  		cout<<"\n";
	}
  }
	
	
	return 0;
}
