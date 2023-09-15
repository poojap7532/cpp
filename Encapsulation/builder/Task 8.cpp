#include<iostream>

//8. WAP to demonstrate example of destructors.
using namespace std;

class Car{
	private:
	    int id=203;
		int bill=230000;
	public:
	    Car(){
	   	    cout<<"Your id is :"<<id<<endl;
	   	    cout<<"Your total Bill is :"<<bill<<endl<<endl;
	   	    
	   	    cout<<"your payment is succesfull"<<endl<<endl;
	   	    
	    }
		~Car(){
			cout<<"Thanks for purchasing ";
		}	                                	
	    	
	    	        
};
int main(){
	
	Car obj;
			
	return 0;		
}
