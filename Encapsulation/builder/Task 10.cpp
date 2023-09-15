#include<iostream>

//10. WAP to make Railway Reservation System.
//Requirements:
//(A) User Input Train Number , Train Name , Source , Destination , Train Time.
//(B) Display Record By Search Train Number.
//(C) Minimum 3 Input Train Record.

using namespace std;
class railway{
	private:
		int Train_number;
		char Train_name[100];
	    char source[100];
	    char destination[100];
	    int Train_time;
	public:
	   void setter(){
	   	cout<<"Enter train number: ";
	   	cin>>Train_number;
	   	cout<<"Enter train name: ";
	   	cin>>Train_name;
	   	cout<<"Enter source: ";
	   	cin>>source;
	   	cout<<"Enter destination: ";
	   	cin>>destination;
	   	cout<<"Enter train time: ";
	   	cin>>Train_time;
    	}    
	    void getter(){
	    cout<<"Enter train number:"<<Train_number<<endl;
	    cout<<"Enter train name:"<<Train_name<<endl;
	    cout<<"Enter source:"<<source<<endl;
	    cout<<"Enter destination:"<<destination<<endl;
	    cout<<"Enter train time:"<<Train_time<<endl<<endl<<endl;
		}   
};
int main(){
	railway obj1,obj2,obj3;
	
	obj1.setter();
	obj2.setter();
	obj3.setter();
	
	obj1.getter();
	obj2.getter();
	obj3.getter();
	
	return 0;
}
