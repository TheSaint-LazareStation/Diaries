#include <iostream>

double transmit(double);

int main(){
	using namespace std;
	cout << "Enter the number of light years:";
	double ly;
	cin >> ly;
	double ast = transmit(ly);
	cout << ly << " light years = " << ast << " astronomical units.\n";
	return 0;
}

double transmit(double ly){
	return ly * 63240;
	
}
