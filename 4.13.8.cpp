#include <iostream>
#include <string>

using namespace std;

struct pizza{
	string company;
	double diameter;
	double weight;
};

int main(){
	pizza * sample = new pizza;
	
	cout << "Enter the diameter of the pizza: ";
	cin >> sample->diameter;
	cout << "Enter the name of the company: ";
	cin.get();				//¶Á'\n' 
	getline(cin, sample->company);
	cout << "Enter the weight of the pizza: ";
	cin >> sample->weight;
	
	cout << "Information:\nCompany: " << sample->company 
		 << "\nDiameter: " << sample->diameter
		 << "\nWeight: " << sample->weight << endl;
	
	delete sample;
	return 0;
}
