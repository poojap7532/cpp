#include<iostream>

//1. WAP to implement exception handling mechanism for
//different types of scenarios:
//- a password cannot be validate if it doesn’t contains
//an uppercase letter

using namespace std;

int main(){
	
	char password;
	
	cout<<"Enter Password : "<<endl;
	cin>>password;
	
	try{
		if(password>='A' && password<='Z'){
			throw password;
		}
		else{
			cout<<"a password cannot be validate"<<endl;
		}
	}
	
	catch(...){
		cout<<"This password is validate"<<endl;
	}
	
	
	return 0;
}
