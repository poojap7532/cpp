#include<iostream>

//5. WAP to generate a cube of given 5 numbers and make an array of those cubes.
using namespace std;

int main(){
 int i, ctr, cub;

    cout << "\n\n Display the cube of the numbers upto a given integer:\n";
    cout << "----------------------------------------------------------\n";
    cout << "Input the number of terms : ";
    cin >> ctr;
    for (i = 1; i <= ctr; i++) 
    {
        cub = i * i * i;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
    }	
	
	return 0;
}
