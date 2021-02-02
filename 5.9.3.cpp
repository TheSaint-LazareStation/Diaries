#include <iostream>

int main(){
    using namespace std;
    double input, sum = 0;

    cout << "Enter some numbers here:\n";
    while ((cin >> input) && (input != 0)){
        sum += input;
        cout << "sum = " << sum << endl;
    }

    cout << "End of input.\n";
    return 0;
}