#include <iostream>
#include <cstring>
const int SIZE = 20;

int main(){
	using namespace std;
	char first_name [SIZE];
	char last_name [SIZE];
	
	cout << "Enter your fist name: ";
	cin.getline(first_name, SIZE);
	cout << "Enter your last name: ";
	cin.getline(last_name, SIZE);
	
	char name [strlen(first_name) + strlen(last_name) + 3];
	strcpy(name, last_name);
	strcat(name, ", ");
	strcat(name, first_name);
	
	cout << "Here's the information in a single string: "
		 << name << endl;
		 
	return 0;
}
