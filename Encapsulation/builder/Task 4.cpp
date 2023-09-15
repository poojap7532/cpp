#include<iostream>
//4. WAP to create two class HighSchool and College with fields like id, stu_name, stu_roll_no, 
//stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address. Make suitable setter 
//and getter with use of static data members.
using namespace std;

class HighSchool{
	
  private:
	int id;
	char name[30];
	int roll;
	char stad[30];
	int age;
	int con;
	static char institute[300];
	char add[100];
  public:
    void setter(){
        cout<<"Enter HighSchool Information :"<<endl;
        
    	cout<<"Enter the id :";
    	cin>>id;
    	
    	cout<<"Enter the Name of student :";
    	cin>>name;
    	
    	cout<<"Enter the Roll Number :";
    	cin>>roll;
    	
    	cout<<"Enter the Standard (1th,5th,8th,10th....):";
    	cin>>stad;
    	
    	cout<<"Enter the Age of student :";
    	cin>>age;
    	
    	cout<<"Enter the Contact :91";
    	cin>>con;
    	
    	cout<<"Enter the Address :";
    	cin>>add;
	}
	void getter(){
		cout<<endl<<"Id :"<<id<<endl<<endl;
		
		cout<<"Name :"<<name<<endl<<endl;
		
		cout<<"Roll No :"<<roll<<endl<<endl;
		
		cout<<"Stadard :"<<stad<<endl<<endl;
		
		cout<<"Age :"<<age<<endl<<endl;
		
		cout<<"Contact :"<<con<<endl<<endl;
		
		cout<<"Institute Name :"<<institute<<endl<<endl;
		
		cout<<"Address :"<<add<<endl<<endl;
	}	
};
char HighSchool :: institute[]="White multi media education";
class Collage{
	
  private:
	int id;
	char name[30];
	int roll;
	char stad[30];
	int age;
	int con;
	static char institute[300];
	char add[100];
  public:
    void setter(){
        cout<<"Enter Collage Information :"<<endl;
        
    	cout<<"Enter the id :";
    	cin>>id;
    	
    	cout<<"Enter the Name of student :";
    	cin>>name;
    	
    	cout<<"Enter the Roll Number :";
    	cin>>roll;
    	
    	cout<<"Enter the Standard (1th,5th,8th,10th....) :";
    	cin>>stad;
    	
    	cout<<"Enter the Age of student :";
    	cin>>age;
    	
    	cout<<"Enter the Contact :91";
    	cin>>con;
    	
    	cout<<"Enter the Address :";
    	cin>>add;
	}
	void getter(){	
		
		cout<<"Name :"<<name<<endl<<endl;
		
		cout<<"Roll No :"<<roll<<endl<<endl;
		
		cout<<"Stadard :"<<stad<<endl<<endl;
		
		cout<<"Age :"<<age<<endl<<endl;
		
		cout<<"Contact :"<<con<<endl<<endl;
		
		cout<<"Institute Name :"<<institute<<endl<<endl;
		
		cout<<"Address :"<<add<<endl<<endl;
	}	
};
char Collage :: institute[]="Black multi media education";

int main(){
	HighSchool obj;
	Collage obj1;
	
	obj.setter();
	
	obj.getter();
	
	obj1.setter();
	
	obj1.getter();
	
	return 0;
}
