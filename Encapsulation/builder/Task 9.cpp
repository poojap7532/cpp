#include<iostream>
//9. WAP to create a class for student to get and print details of N students. (with use of array of objects)
using namespace std;

class student{
	private:
		int id;
		char name[30];

    public:
    	void setter(){
    		cout<<"Enter id:";
    		cin>>id;
    		cout<<"Enter name:";
    		cin>>name;
		}
		void getter(){
			cout<<"id: "<<id<<endl;
			cout<<"name: "<<name<<endl<<endl;
		}
};

int main(){
	int N;
	cout<<"Enter number: ";
	cin>>N;
	
	student obj[N];
	int i;
	
	for(i=0; i<=N; i++){
		obj[i].setter();
	}
	for(i=0; i<=N; i++){
		obj[i].getter();
	}
	
	
	return 0;
}		
