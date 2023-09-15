#include<iostream>
//1. WAP to get and display N numbers of Hotels and static
//information using encapsulation with array of objects
//member by including below mentioned attributes:
//- hotel_id
//- hotel_name
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year
//- hotel_staff_quantity
//- hotel_room_quantity

using namespace std;

class hotel{
	private:
    int	hotel_id;
	char hotel_name[200];
	char hotel_type [200];
	char  hotel_rating{100};
    char hotel_location[100];
	int  hotel_establish_year;
	int	 hotel_staff_quantity;
	int  hotel_room_quantity;
	
	public:
	void setter(){
		cout<<"Enter hotel id: ";
		cin>>hotel_id;
		cout<<"Enter hotel name: ";
		cin>> hotel_name;
		cout<<"Enter hotel type: ";
		cin>>hotel_type;
		cout<<"Enter hotel rating: ";
		cin>>hotel_rating;
		cout<<"Enter hotel location: ";
		cin>>hotel_location;
		cout<<"Enter hotel establish year: ";
		cin>>hotel_establish_year;
		cout<<"Enter hotel staff quantity: ";
		cin>>hotel_staff_quantity;
		cout<<"Enter hotel room quantity: ";
		cin>>hotel_room_quantity;
	}	
	void getter(){
		cout<<"hotel id: "<<hotel_id<<endl;
		cout<<"hotel name: "<<hotel_name<<endl;
		cout<<"hotel type: "<<hotel_type<<endl;
		cout<<"hotel rating: "<<hotel_rating<<endl;
		cout<<"hotel location: "<<hotel_location<<endl;
		cout<<"hotel establish year: "<<hotel_establish_year<<endl;
		cout<<"hotel staff quantity: "<<hotel_staff_quantity<<endl;
		cout<<"hotel room quantity: "<<hotel_room_quantity<<endl<<endl<<endl;
			
	}
};

int main(){
	hotel obj[8];
	int i;
	for(i=0; i<=8; i++){
		obj[i].setter();
	}
	for(i=0; i<=8; i++){
		obj[i].getter();
	}
	return 0;
}

