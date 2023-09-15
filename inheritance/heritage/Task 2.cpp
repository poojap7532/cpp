#include<iostream>
//2. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() 
//function. Then create two bases class Zebra and Dolphin which write a message telling the age,
// the name and giving some extra information (e.g. place of origin).
using namespace std;

class mother{
	public:
		void set_value1(){
			cout<<"Age : 20 year"<<endl;
			cout<<"Name : Mother"<<endl;
			cout<<"place of origin : Australia"<<endl;	
		}
};
class zebra:public mother{
	public:
		void set_value2(){
			cout<<"Age : 2 year"<<endl;
			cout<<"Name : zebra"<<endl;
			cout<<"place of origin : Paris"<<endl;	
		}
};
class dolphin:public mother{
	public:	
    	void set_value3(){
			cout<<"Age : 2 year"<<endl;
			cout<<"Name : dolphin"<<endl;
			cout<<"place of origin : Usa"<<endl;	
		}
};

int main(){
	zebra obj1;
	dolphin obj2;
	
	obj1.set_value1();
	obj1.set_value2();
	
	cout<<"\n";
	obj2.set_value1();
	obj2.set_value3();
	
	return 0;
	
}

