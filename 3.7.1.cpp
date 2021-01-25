#include <iostream>

const int inch_per_feet = 12;

int main(){
	using namespace std;
	cout << "Enter your height:____\b\b\b\b";
	int h;
	cin >> h;
	
	int h_feet;
	int h_inch;
	h_feet = h / inch_per_feet;
	h_inch = h % inch_per_feet;
	
	cout << "You are " << h_feet << " foot and " << h_inch << " inches tall.\n";
	
	return 0;
}
