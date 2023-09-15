#include<iostream>

//13. WAP to make Bank Management System. (like shown in below images)

using namespace std;

class Bank{
	private:
		char name[100];
		int acc;
		int num;
		char email[100];
		int p,x,m,n;
	public:

		void setter(){	
			cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t-: WELCOME AS STAFF"<<endl;
			cout<<"------------------------------------------------------------------------------------------------------------------------";
			
			cout<<endl<<endl<<"Enter the name of STAFF :";
			cin>>name;
			
			cout<<"Enter the Account number  of STAFF :";
			cin>>acc;
			
			cout<<"Enter the Phone Nummber of STAFF :";
			cin>>num;
			
			cout<<"Enter the E-mail of STAFF :";
			cin>>email;
			
			
		}
		void getter(int a){
			cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t Name :"<<name<<endl;
			cout<<"\t\t\t\t\t Account No :"<<acc<<endl;
			cout<<"\t\t\t\t\t Phone No :"<<num<<endl;
			cout<<"\t\t\t\t\t E-mail :"<<email<<endl;
			cout<<"------------------------------------------------------------------------------------------------------------------------";
			
			cout<<endl<<endl<<"\t\t\t\t Press [1] to Deposite the money :"<<endl;
			cout<<"\t\t\t\t Press [2] to Transfer the Money :"<<endl;
			cout<<"\t\t\t\t Press [3] to Withraw the Money :"<<endl;
			
			cout<<"\t\t\t\t Enter the digit:";
			cin>>p;
			
			switch(p){
				default:
					cout<<"Enter a valid digit";
					break;
				case 1:
					cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
					cout<<"\t\t\t Enter Amount to Deposite :";
					cin>>x;
					cout<<endl<<"------------------------------------------------------------------------------------------------------------------------";
					
					m=a-x;
					
					cout<<endl<<endl<<"\t\t\t\t\t Your Actual Amount is :"<<a<<endl;
					cout<<"\t\t\t\t\t Congrates Your Ammount has Deposite Successfully :"<<endl;
					cout<<"\t\t\t\t\t Your Account Availible Balance is :"<<m<<endl;
				case 2:
				    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
					cout<<"\t\t\t Enter Amount to Transfer :"<<endl;
					cin>>x;
					cout<<"\t\t\t Enter Account Number to Transfer :";
					cin>>n;
					cout<<endl<<"------------------------------------------------------------------------------------------------------------------------";
					
					m=a-x;
					
					cout<<endl<<endl<<"\t\t\t\t\t Your Actual Amount is :"<<a<<endl;
					cout<<"\t\t\t\t\t Congrates Your Ammount has Transfer Successfully :"<<endl;
					cout<<"\t\t\t\t\t Your Account Availible Balance is :"<<m<<endl;
				case 3:
				    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
					cout<<"\t\t\t Enter Amount to Withdraw :";
					cin>>x;
					cout<<endl<<"------------------------------------------------------------------------------------------------------------------------";
					
					m=a-x;
					
					cout<<endl<<endl<<"\t\t\t\t\t Your Actual Amount is :"<<a<<endl;
					cout<<"\t\t\t\t\t Congrates Your Ammount has Withdraw Successfully :"<<endl;
					cout<<"\t\t\t\t\t Your Account Availible Balance is :"<<m<<endl;		
			}
		}
	
			
		
		

		
};
int main(){
	char l;
	
	cout<<"\t\t\t\t\t-: BANK MANAGMENT SYSTEM :-"<<endl;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	
	cout<<"\t\t\t\t\t-: Designed N Progarmed By :-"<<endl;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	
	cout<<"\t\t\t\t\t\t-: Trainer :-"<<endl<<endl;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	
	cout<<"\t\t\t\t\t-: Ashish Solanki Ceo of Bank :-"<<endl<<endl<<endl;
	
	
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t-:Press A to log in as Aministator Or S to log in as STAFF:-"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
			
	cout<<"Enter Here:";
	cin>>l;
	
	Bank obj;
	
	if(l=='s' || l=='S'){
		obj.setter();
	
    	obj.getter(200000);
	}
	else{
		cout<<"ServerDown!!";
	}
	
	return 0;
}
