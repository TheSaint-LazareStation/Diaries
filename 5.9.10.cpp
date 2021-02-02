#include <iostream>

int main(){
    using namespace std;
    int row = 0;

    cout << "Enter number of rows: ";
    cin >> row;
    for (int i = 0; i < row; i ++){
        for (int j = 0; j < (row - i - 1); j ++){
            cout << ".";
        }
        for (int k = 0; k < (i + 1); k ++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
