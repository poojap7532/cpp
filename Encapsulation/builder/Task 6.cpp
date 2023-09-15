#include<iostream>

//6. WAP to demonstrate example of default constructor or no argument constructor.
using namespace std;

class student{
	public:
		student(){
			cout<<"default"<<endl;
		}
};
int main(){
	student obj;
	
	return 0;
}
