#include<iostream>

//1. WAP to create a class Employee with setter and getter. Which have fields like id, name, role, salary,
// experience, address, email and contact. Get 5 records.
using namespace std;

class employee{
	private:
		int id;
		char name[200];
		char role[100];
		int salary;
		int experience;
		char address[200];
		char email[200];
		double contact;
		
	public:
		void setter(){
			cout<<"Enter id: ";
			cin>>id;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter role: ";
			cin>>role;
			cout<<"Enter salary: ";
			cin>>salary;
			cout<<"Enter experience: ";
			cin>>experience;
			cout<<"Enter address: ";
			cin>>address;
			cout<<"Enter email: ";
			cin>>email;
			cout<<"Enter contact: ";
			cin>>contact;
		}
		void getter(){
			cout<<"id: "<<id<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"role: "<<id<<endl;
			cout<<"salary: "<<salary<<endl;
			cout<<"experience: "<<experience<<endl;
			cout<<"address: "<<address<<endl;
			cout<<"email: "<<email<<endl;
			cout<<"contact: "<<contact<<endl<<endl<<endl<<endl;
		}
};
int main(){
	employee obj1,obj2,obj3,obj4,obj5;
	
	obj1.setter();
	obj2.setter();
	obj3.setter();
	obj4.setter();
	obj5.setter();
	
	
	obj1.getter();
	obj2.getter();
	obj3.getter();
	obj4.getter();
	obj5.getter();
	return 0;
}

