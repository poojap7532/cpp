#include<iostream>

//1. WAP to implement exception handling mechanism for
//different types of scenarios:
//- a number cannot be divide by zero

using namespace std;

int main(){
	
	int a = 10;
	int b = 0;
	
	try{
		if(b==0){
			throw b;
		}
		else{
			cout<<a/b<<endl;
		}
	}
	
	catch(...){
		cout<<" A Number Cannot Divide By Zero"<<endl;
	}
	
	
	
	return 0;
}
