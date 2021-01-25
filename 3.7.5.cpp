#include <iostream>

int main(){
	using namespace std;
	long long all, usa;
	double percent;
	
	cout << "Enter the world population: ";
	cin >> all;
	cout << "Enter the population of the US: ";
	cin >> usa;
	
	percent = ((double)usa / all) * 100.0;
	
	cout << "The population of the US is " << percent << "% of the world population.\n";
	
	return 0;
		
}
