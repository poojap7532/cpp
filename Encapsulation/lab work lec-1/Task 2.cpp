#include<iostream>
//2. WAP to get and display 5 Customers
//information using encapsulation by including
//below mentioned attributes:
//- cust_id
//- cust_name
//- cust_age
//- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
//- cust_mobile_number
//- cust_city
//- cust_simcard_validity (in years)

using namespace std;

class data{
	private:
	 int  cust_id;
	 char cust_name[100];
	 int  cust_age;
	 char cust_telecome_brand_name[100];
	 char  mobile_number[100];
	 char cust_city[100];
	 char cust_simcard_validity[100];
	 
	 public:
	 
	 	void setter(){
		cout<<"Enter customer id: ";
		cin>>cust_id;
		
		cout<<"Enter customer name: ";
		cin>>cust_name;
		
		cout<<"Enter customer age: ";
		cin>>cust_age;
		
		cout<<"Enter customer telecome brand name: ";
		cin>>cust_telecome_brand_name;
		
		cout<<"Enter mobile number: ";
		cin>>mobile_number;
		
		cout<<"Enter customer city: ";
		cin>>cust_city;
		
		cout<<"Enter customer simcard validity: ";
		cin>>cust_simcard_validity;
	}		
	void getter(){
		cout<<" Enter customer id: "<<cust_id<<endl;
		cout<<" Enter customer name: "<<cust_name<<endl;
		cout<<" Enter customer age: "<<cust_age<<endl;
		cout<<" Enter customer telecome brand name: "<<cust_telecome_brand_name<<endl;
		cout<<" Enter mobile number: "<<mobile_number<<endl;		
		cout<<" Enter customer city: "<<cust_city<<endl;
		cout<<" Enter customer simcard validity: "<<cust_simcard_validity<<endl<<endl<<endl<<endl;		
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
