#include <iostream>
#include <string>

using namespace std;
struct car{
    string producer;
    int year;
};

int main(){
    int num;

    cout << "How many cars do you wish to catalog?\n";
    cin >> num;
    car * p = new car [num];

    for (int i = 0; i < num; i++){
        cin.get();
        cout << "Car #" << (i + 1) << ":\n";
        cout << "Please enter the make: ";
        getline(cin, p[i].producer);
        cout << "Please enter the year made: ";
        cin >> p[i].year;
    }

    cout << "Here is your collection:\n";

    for(int i = 0; i < num; i++){
        cout << p[i].year << " " << p[i].producer << endl;
    }

    delete [] p;
    return 0;
}