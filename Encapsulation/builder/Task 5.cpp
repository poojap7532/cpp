#include<iostream>

//5. WAP to create a class which have both static data member and static member function. 
//That class gives details of all states in India.
using namespace std;

class India{
	private:
		static char stat1[50];
		static char stat2[50];
		static char stat3[50];
		static char stat4[50];
		static char stat5[50];
		static char stat6[50];
		static char stat7[50];
		static char stat8[50];
		static char stat9[50];
		static char stat10[50];
		static char stat11[50];
		static char stat12[50];
		static char stat13[50];
		static char stat14[50];
		static char stat15[50];
		static char stat16[50];
		static char stat17[50];	
		static char stat18[50];
		static char stat19[50];
		static char stat20[50];
		static char stat21[50];
		static char stat22[50];
		static char stat23[50];
		static char stat24[50];
		static char stat25[50];
		static char stat26[50];
		static char stat27[50];
		static char stat28[50];
	public:
		void getter(){
		cout<<"All states of India :";
		
		cout<<endl<<stat1<<endl;
		cout<<stat2<<endl;
		cout<<stat3<<endl;
		cout<<stat4<<endl;
		cout<<stat5<<endl;
		cout<<stat6<<endl;
		cout<<stat7<<endl;
		cout<<stat8<<endl;
		cout<<stat9<<endl;
		cout<<stat10<<endl;
		cout<<stat11<<endl;
		cout<<stat12<<endl;
		cout<<stat13<<endl;
		cout<<stat14<<endl;
		cout<<stat15<<endl;
		cout<<stat16<<endl;
		cout<<stat17<<endl;	
		cout<<stat18<<endl;	
		cout<<stat19<<endl;	
		cout<<stat20<<endl;	
		cout<<stat21<<endl;	
		cout<<stat22<<endl;	
		cout<<stat23<<endl;	
		cout<<stat24<<endl;	
		cout<<stat25<<endl;	
		cout<<stat26<<endl;	
		cout<<stat27<<endl;	
		cout<<stat28<<endl;
    }
    static void box(){
    	cout<<stat16<<endl;
    	cout<<stat17<<endl;
	}
};
char India :: stat1[]="Rajasthan";
char India :: stat2[]="Maharastra";
char India :: stat3[]="Nagaland";
char India :: stat4[]="Madhya Pradesh";
char India :: stat5[]="Jammu&kashmir";
char India :: stat6[]="Punjab";
char India :: stat7[]="Tamilnadu";
char India :: stat8[]="Assam";
char India :: stat9[]="Tripura";
char India :: stat10[]="Meghalay";
char India :: stat11[]="Telngana";
char India :: stat12[]="Gujarat";
char India :: stat13[]="Sikkim";
char India :: stat14[]="Andhra Pradesh";
char India :: stat15[]="Uttrakhand";
char India :: stat16[]="West Bengol";
char India :: stat17[]="Kerala";
char India :: stat18[]="Manipur";
char India :: stat19[]="Uttar Pradesh";
char India :: stat20[]="Goa";
char India :: stat21[]="Hariyana";
char India :: stat22[]="Mizoram";
char India :: stat23[]="Arunachal Pradesh";
char India :: stat24[]="Himachal Pradesh";
char India :: stat25[]="Chhatisgadh";
char India :: stat26[]="Bihar";
char India :: stat27[]="Zarkhad";
char India :: stat28[]="Odisa";



int main(){
	India obj;
	
	obj.getter();
	
    India::box();
	
	
	return 0;
}
