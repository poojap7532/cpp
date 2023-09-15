#include<iostream>

//1. WAP to implement exception handling mechanism for
//different types of scenarios:
//- a person cannot be able to vote if his/her age is less
//than 18
using namespace std;

int main(){
	
	int age;
	
	cout<<"Enter Age : "<<endl;
	cin>>age;
	
	try{
		if(age<18){
			throw age;
		}
		else{
			cout<<"A Person Is Able To Vote"<<endl;
		}
	}
	
	catch(...){
		cout<<"A Person cannot Be Able To Vote"<<endl;
	}
	
	return 0;
}
