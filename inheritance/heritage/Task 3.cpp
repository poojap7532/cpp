#include<iostream>
//3. WAP to read and print employee information using multiple inheritance.
using namespace std;

class employee1{
	public:
	 void skill1(){
	 	cout<<"Project manager"<<endl;
	 }
};
class employee2{
	public:
	 void skill2(){
	 	cout<<"Team leader(TL)"<<endl;
	 }	
};
class employee3:public employee1,public employee2{
	public:
	void skill3(){
	 	cout<<"Casier"<<endl;
	 }	
};

int main(){
	employee3 obj;
	
	obj.skill1();
	obj.skill2();
	obj.skill3(); 
	
	return 0;
}
