#include<iostream>

using namespace std;

class Data{
	private:
		int id;
		char name[50];
	public:
	    void setter(){
	    	cout<<"Enter id: ";
	    	cin>>id;
	    	cout<<"Enter Name: ";
	    	cin>>Name;
		}	
		void getter(){
			cout<<"id: "<<id<<endl;
			cout<<"name"<<name<<endl<<endl;
		}
};

int main(){
	Data obj1,obj2;
	
	obj1.setter();
	obj2.setter();
	
	obj1.getter();
	obj2.getter();
	
	
	return 0;
}
