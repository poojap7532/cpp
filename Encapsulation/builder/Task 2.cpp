#include<iostream>

//2. WAP to create a class which Read and print Student details using Two Classes. 
//(Make two classes, create one class's object in another class.)
using namespace std;

class Student {
	private:
		int roll;
		char name[100];
		char course[100];
	public:
	    void setter(){
	    	cout<<"Enter Your Roll number : ";
	    	cin>>roll;
	    	
	    	cout<<"Enter Your Name : ";
	    	cin>>name;
	    	
	    	cout<<"Enter Your Course : ";
	    	cin>>course;
		}
		void getter(){
			cout<<"Roll Number :"<<roll;
			
			cout<<"Name :"<<name;
			
			cout<<"Course :"<<course;
		}
			
};
class Student_Detail{
	public:
		void setter(){
			Student obj;
			obj.setter();
		}
		
		void getter(){
			Student obj;
			obj.getter();
		}
};

int main(){
	Student_Detail obj;
	
	obj.setter();
	obj.getter();
	
	return 0;
}
