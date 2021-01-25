#include <iostream>

int main(){
	using namespace std;
	double fc;
	
	cout << "Enter your car's fuel consumption(in European style):";
	cin >> fc;
	
	cout << "Your car's fuel consumption is " << 62.14 / (fc / 3.785) << " mpg in American style.\n";
	
	return 0;
}
