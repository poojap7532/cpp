#include<iostream>
#include<string.h>

//3. WAP to create a class Hotel with fields like id, name, type, staff_size, room_size, establish_year,
// address, rating and website. Illustrate the use of encapsulation (strict encapsulation) with "this keyword".
using namespace std;

class hotel{
	private:
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[200];
		char rating[100];
	
	public:
	
	void setter(int id,char name[], char type[], int staff_size, int room_size,	int establish_year,
	char address[],	char rating[]){
		this->id=id;
		strcpy(this->name,name);
		strcpy(this->type,type);
		this->staff_size=staff_size;
		this->room_size=room_size;
		this->establish_year=establish_year;
		strcpy(this->address,address);
		strcpy(this->rating,rating);
	}		
	void getter(){
		cout<<"id: "<<id<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"type: "<<type<<endl;	
		cout<<"staff_size: "<<staff_size<<endl;	
		cout<<"room_size: "<<room_size<<endl;
		cout<<"establish_year: "<<establish_year<<endl;	
	    cout<<"address: "<<address<<endl;		
	    cout<<"rating: "<<rating<<endl<<endl<<endl;	
	}
};

int main(){
	hotel obj1,obj2,obj3;
	
	obj1.setter(401,"riya","***",3,4,2019,"kathodara,surat","3*");
	obj2.setter(404,"krina","*****",3,4,2020,"sarthana-jakatnaka,surat","5*");
	obj3.setter(404,"priyal","**",3,4,2022,"navjivan,surat","2*");
	
	
	obj1.getter();
	obj2.getter();
	obj3.getter();
	
	return 0;
}


