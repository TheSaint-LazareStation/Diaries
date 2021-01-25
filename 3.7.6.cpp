#include <iostream>

int main(){
	using namespace std;
	double mile, gallon;
	
	cout << "Enter the driving mileage(in mile): ";
	cin >> mile;
	cout << "Enter the gasoline consumption(in gallon): ";
	cin >> gallon;
	
	cout << "Your car can run " << mile / gallon << " miles per gallon.\n";
	
	return 0;
}
