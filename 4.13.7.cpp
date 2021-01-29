#include <iostream>
#include <string>

using namespace std;

struct pizza{
	string company;
	double diameter;
	double weight;
};

int main(){
	pizza sample;
	
	cout << "Enter the name of the company: ";
	getline(cin, sample.company);
	cout << "Enter the diameter of the pizza: ";
	cin >> sample.diameter;
	cout << "Enter the weight of the pizza: ";
	cin >> sample.weight;
	
	cout << "Information:\nCompany: " << sample.company 
		 << "\nDiameter: " << sample.diameter
		 << "\nWeight: " << sample.weight << endl;
	
	return 0;
}
