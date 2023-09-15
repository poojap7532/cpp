#include<iostream>

//7. WAP to demonstrate example of parameterized constructor.

using namespace std;

class student{
	public:
		student(){
			cout<<"default"<<endl;
		}
	student(int a,int b){
		cout<<"multi:"<<a*b<<endl;
	}	
};

int main(){
	student obj(100,200);
	
	return 0;
}
