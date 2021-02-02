#include <iostream>

const double SIMPLE_INTEREST = 0.1;
const double COMPOUND_INTEREST = 0.05;
const double DA = 100.0;
const double CE = 100.0;

int main(){
    using namespace std;
    double Daphne = DA;
    double Cleo = CE;
    int year = 0;

    while (Cleo <= Daphne){
        Daphne += DA * SIMPLE_INTEREST;
        Cleo *= (1 + COMPOUND_INTEREST);
        year ++;
    }

    cout << "After " << year << " years Cleo will surpass Daphne.\n"
         << "By then the amount of money Daphne has will be " << Daphne
         << " and Cleo's will be " << Cleo << ".\n";
    return 0;
}