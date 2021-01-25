#include <iostream>

const double MINUTE_PER_DEGREE = 60.0;
const double SECOND_PER_MINUTE = 60.0;

int main(){
	using namespace std;
	int degree, minute, second;
	double result;
	
	cout << "Enter a latitude in degrees, minutes, and seconds:\n"
		 << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;
	
	result = degree + minute / MINUTE_PER_DEGREE + second / SECOND_PER_MINUTE / MINUTE_PER_DEGREE;
	cout << degree <<" degrees, " << minute << " minutes, " << second << " seconds = "
		 << result << " degrees." << endl;
	
	return 0;
}
