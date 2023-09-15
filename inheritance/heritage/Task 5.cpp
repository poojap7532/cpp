#include<iostream>
//5. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)
using namespace std;

class A{
	public:
		int id;
		char name[100];
		char role[100];
		
	
	void setter(){
	    	cout<<"Enter id :";
	    	cin>>id;
	    	
	    	cout<<"Enter Name :";
	    	cin>>name;
	    	
	    	cout<<"Enter Role :";
	    	cin>>role;
		}	
};
class B{
	public:
		int salary;
		char exp[100];
		
	void setter1(){
	    	cout<<"Enter Your Salary :";
	    	cin>>salary;
	    	
	    	cout<<"Enter Experience :";
	    	cin>>exp;
		}
};
class C : public A ,public B{
	public:
		char com[100];
		char add[100];
	void setter2(){
	    	cout<<"Enter Company Name :";
	    	cin>>com;
	    	
	    	cout<<"Enter Address :";
	    	cin>>add;
		}
		void getter(){
			cout<<"Name :"<<name<<endl;
			
			cout<<"Role :"<<role<<endl;
			
			cout<<"Salary :"<<salary;
		}
};
class D :public C{
	public:
		char email[100];
		char con[100];
	void setter3(){
	    	cout<<"Enter Email :";
	    	cin>>email;
	    	
	    	cout<<"Enter Contact 91:";
	    	cin>>con;
		}
		void getter(){
			C();
			
			cout<<"Id :"<<id<<endl;
			
			cout<<"Experience :"<<exp<<endl;
			
			cout<<"Company Name :"<<com;
			
			cout<<"Address :"<<add;
			
			cout<<"Email :"<<email;
			
			cout<<"Contact :"<<con;
		}
		
};
int main(){
	D obj;
	
	obj.setter();
	obj.setter1();
	obj.setter2();
	obj.setter3();
	
	obj.getter();
	
	return 0;
}
