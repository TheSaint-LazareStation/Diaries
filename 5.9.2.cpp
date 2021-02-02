#include <iostream>
#include <array>

const int Arsize = 101;

int main(){
    using namespace std;
    array<long double, Arsize> fac{};
    fac[1] = fac[0] = 1.0L;

    for (int i = 2; i < Arsize; i++){
        fac[i] = i * fac[i-1];
    }

    cout << (Arsize - 1) << "! = " << fac[Arsize - 1] << endl;

    return 0;
} 
