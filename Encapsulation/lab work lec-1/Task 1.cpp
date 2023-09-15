#include<iostream>
//1. WAP to get and display 5 Students information using
//encapsulation by including below mentioned
//attributes:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_email
//- stu_city
//- stu_college

using namespace std;

class data{
	private:
	int stu_id;
	char stu_name[100];
	int stu_age;
	char stu_course[100];
	char stu_email[100];
	char stu_city[100];
	char stu_college[100];
		
	public:
	void setter(){
		cout<<"Enter student id: ";
		cin>>stu_id;
		
		cout<<"Enter student name: ";
		cin>>stu_name;
		
		cout<<"Enter student age: ";
		cin>>stu_age;
		
		cout<<"Enter student course: ";
		cin>>stu_course;
		
		cout<<"Enter student email: ";
		cin>>stu_email;
		
		cout<<"Enter student city: ";
		cin>>stu_city;
		
		cout<<"Enter student college: ";
		cin>>stu_college;
	}	
	void getter(){
		cout<<" student id: "<<stu_id<<endl;
		cout<<" student name: "<<stu_name<<endl;
		cout<<" student age: "<<stu_age<<endl;
		cout<<" student course: "<<stu_course<<endl;
		cout<<" student email: "<<stu_email<<endl;		
		cout<<" student city: "<<stu_city<<endl;
		cout<<" student college: "<<stu_college<<endl<<endl<<endl;		
	}
};

int main(){
	data obj1,obj2,obj3,obj4,obj5;
	
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

