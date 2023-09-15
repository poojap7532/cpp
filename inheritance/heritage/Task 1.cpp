#include<iostream>
//1. WAP with a mother class and an inherited daugther class.Both of them should have a method void display()
// that prints a message (different for mother and daugther). In the main define a daughter and call the display() 
// method on it.

using namespace std;
class mother{
	public:
		void display(){
			cout<<"Name : Mother "<<endl;
			cout<<"Age : 40"<<endl;
		}
};
class daughter:public mother{
	public:
		void display(){
			cout<<"Name : daughter "<<endl;
			cout<<"Age : 21"<<endl;
		}
};
int main(){
	daughter obj;
	
	obj.mother::display();
	
	cout<<"\n";
	
	obj.display();
	return 0;
}
