#include <iostream>

int main(){
	using namespace std;
	double score[3];
	
	cout << "Please enter the score of your 40 meters run: ";
	cin >> score[0];
	cin >> score[1];
	cin >> score[2];
	
	cout << "1 " << score[0] << endl
		 << "2 " << score[1] << endl
		 << "3 " << score[2] << endl
		 << "averange: " << (score[0] + score[1] + score[2]) / 3
		 << endl;
	
	return 0;
}
