#include <iostream>
#include <string>
const int SIZE = 20;

int main(){
	using namespace std;
	string first_name, last_name, full_name;
	
	cout << "Enter your fist name: ";
	getline(cin, first_name);
	cout << "Enter your last name: ";
	getline(cin, last_name);
	
	full_name = last_name + ", " + first_name;
	
	cout << "Here's the information in a single string: "
		 << full_name << endl;
		 
	return 0;
}
