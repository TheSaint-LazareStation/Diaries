#include <iostream>

double transmit(double);

int main(){
	using namespace std;
	cout << "Please enter a Celsius value:";
	double c, f;
	cin >> c;
	f = transmit(c);
	cout << c <<" degrees Celsius is " << f << " degrees Fahrenheit.\n";
}

double transmit(double c){
	return 1.8 * c + 32.0;
}
