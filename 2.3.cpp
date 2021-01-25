#include <iostream>
using namespace std;

void output_1();
void output_2();

int main(){
	output_1();
	output_1();
	output_2();
	output_2();
	return 0;
}

void output_1(){
	cout << "Three blind mice\n";
}

void output_2(){
	cout << "See how they run\n";
}
