#include <iostream>
#include <string>

int main(){
    using namespace std;
    string word;
    int count = 0;

    cout << "Enter words (to stop, type the word done):\n";

    do{
        cin >> word;
        count ++;
    }while (word != "done");

    cout << "You enter a total of " << (count - 1) << " words.\n";
    return 0;
}