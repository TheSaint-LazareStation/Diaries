#include <iostream>

int main(){
    using namespace std;
    const char * month[12]= {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"
    };
    int sales[3][12] {};//每月销售额
    int sum = 0;//总销售额

    for (int i = 0; i < 12; i++){
        cout << month[i] << ":";
        for(auto & sale : sales){
            cin >> sale[i];
            sum += sale[i];
        }
    }

    cout << "You have sold " << sum << " books this year.\n";
    return 0;
}