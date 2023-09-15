#include<iostream>
#include<string.h>

//11. WAP to make Supermarket Billing System.
//Requirements:
//(A) Verify User Id And Password
//(B) User Input Item Number , Item Name , Quantity , Tax , Discount.
//(C) Display All Record In Ascending order (by item Number)
using namespace std;

class Supermarket{
	private:
		char id[30];
		char pass[30];
		int i,a;
		int num;
		char name[100];
		int quan;
		char tax[100];
		char dis[100];
		
	public:
	    void setter(){
	    	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	    	cout<<"\t\t\t\t\t\t\t -:SuperMarket:-"<<endl;
	    	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	    
			cout<<"Enter Id (Exmple:000):";
	    	cin>>id;
	    	
	    	cout<<"Enter Pass (Exmple:xxxx00):";
	    	cin>>pass;
	    	
	    	if(strlen(pass)<7 && strlen(id)<4){
	    		cout<<"Total Number of item :";
	    		cin>>a;
	    		
	    		for(i=0;i<a;i++){
	    			cout<<"Enter Item Number :";
	    			cin>>num;
	    			
	    			cout<<"Enter Item Name :";
	    			cin>>name;
	    			
	    			cout<<"Enter Item Quantity :";
	    			cin>>quan;
	    			
	    			cout<<"Enter Item Tax :";
	    			cin>>tax;
	    			
	    			cout<<"Enter Item Discount :";
	    			cin>>dis;
				}
			}
			else{
				cout<<"Please Enter valid details !!";
			}
		}	
};
int main(){
	Supermarket obj;
	
	obj.setter();
	
	
	return 0;
}
