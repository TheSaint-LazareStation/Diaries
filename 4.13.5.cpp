#include <iostream>
#include <string>

using namespace std;

struct CandyBar{
	string brand;
	double weight;
	int calories;
};

int main(){
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	
	cout << "Brand: " << snack.brand << endl
		 << "Weight: "<< snack.weight << endl
		 << "Calories: " << snack.calories << endl;
	
	return 0;
}
