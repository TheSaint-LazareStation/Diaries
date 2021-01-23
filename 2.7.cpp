#include <iostream>

using namespace std;

void display(int, int);

int main(){
	cout << "Enter the number of hours:";
	int hour;
	cin >> hour;
	
	cout << "Enter the number of minutes:";
	int min;
	cin >> min;
	
	display(hour, min);
	return 0;
}

void display(int h, int m){
	if (h >= 0 && h <= 24 && m >= 0 && m < 60)
		cout << "Time: " << h << ":" << m <<endl;
	else
		cout << "Wrong number!\n";	
}
