#include<iostream>
//4. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.
using namespace std;

class maths{
	public:
		int a=5;
	    void set_value(){
			cout<<"Enter value: ";
			cin>>a;
		
		}
		int get_value(){
			
			return a;
		}	
};

class square :public maths {
	public:
		void get1(){
	      cout<<a*a<<endl;
	   }
};

class cube :public maths{
	public:
		void get2(){
		cout<<a*a*a<<endl;
		}
};

int main(){
	square obj1;
	cube obj2;
	
	obj1.get1();
	obj2.get2();
	
	
	return 0;
}

