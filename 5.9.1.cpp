#include <iostream>

int main(){
	using namespace std;
	int start, end;
	int i, sum;
	
	cout << "Please enter 2 integers(the smaller one comes first):\n";
	cin >> start;
	cin >> end;
	
	sum = 0;
	for (i = start; i <= end; i++){
		sum += i;
	}
	
	cout << "The sum of all integers between two integers is " 
		 << sum << ".\n";
	
	return 0;
}
