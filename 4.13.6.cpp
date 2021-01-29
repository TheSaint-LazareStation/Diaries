#include <iostream>
#include <string>

using namespace std;

struct CandyBar{
	string brand;
	double weight;
	int calories;
};

int main(){
	CandyBar snack [3] = {
		{"Mocha Munch", 2.3, 350},
		{"Milky way", 3.14, 40},
		{"Bonza", 7.14285, 1155}
	};
	
	cout << "Brand: " << snack[0].brand << endl
		 << "Weight: "<< snack[1].weight << endl
		 << "Calories: " << snack[2].calories << endl;
	
	return 0;
}
