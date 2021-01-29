#include <iostream>
#include <string>

using namespace std;

struct CandyBar{
	string brand;
	double weight;
	int calories;
};

int main(){
	CandyBar * snack = new CandyBar [3];
	
	snack[0].brand = "Mocha Munch";
	snack[0].weight = 2.3;
	snack[0].calories = 350;
	snack[1].brand = "Milky way";
	snack[1].weight = 2.33;
	snack[1].calories = 35;
	snack[2].brand = "Bonza";
	snack[2].weight = 5.71428;
	snack[2].calories = 2235;
	
	cout << "Brand: " << snack[0].brand << endl
		 << "Weight: "<< snack[1].weight << endl
		 << "Calories: " << snack[2].calories << endl;
	
	return 0;
}
