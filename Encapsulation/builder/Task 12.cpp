#include<iostream>

//12. WAP which perform Addition of members of two different classes using friend Function.

using namespace std;
class member{
	public:
		member(){
			cout<<"default"<<endl;
		}
		member(int a,int b){
			cout<<"add: "<<a+b<<endl;
		}
};
int main(){
	member obj(20,40);
	return 0;
}
