#include <iostream>
#include <cmath>

const int inch_per_feet = 12;
const double meter_per_inch = 0.0254;
const double pound_per_kg = 2.2;

int main(){
	using namespace std;
	cout << "Enter your height and weight:";
	int h_feet;
	double h_inch;
	double w;
	cin >> h_feet;
	cin >> h_inch;
	cin >> w;
	//transmit
	double bmi;
	bmi = (w / pound_per_kg) / pow((h_feet * inch_per_feet + h_inch) * meter_per_inch, 2);
	cout << "Your BMI = " << bmi << endl;
	
	return 0;
}
