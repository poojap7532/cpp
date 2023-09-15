#include<iostream>
//1. WAP to check given input is numeric or not.
using namespace std;

int main(){
	
	char ch;
	
    cout<<"Enter value: ";
	cin>>ch;
	
   if(ch >='0' && ch <= '9'){
    	cout<<"numeric number"<<endl;
} 
   else{
   	   cout<<"not numeric number"<<endl;
}
	
	
	return 0;
}
