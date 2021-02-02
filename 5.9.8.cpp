#include <iostream>
#include <cstring>

const int SIZE = 20;

int main(){
    using namespace std;
    char word[SIZE] = {};
    int count = 0;

    cout << "Enter words (to stop, type the word done):\n";

    do{
        cin >> word;
        count ++;
    }while (strcmp(word, "done"));

    cout << "You enter a total of " << (count - 1) << " words.\n";
    return 0;
}