#include <iostream>
#include <string>
#include <vector>
#include "functions.cpp"
using namespace std;



int main() {
    vector<card> deck;
    int i;
    int j;

    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 13; ++j) {
            deck.push_back({j + 1, i + 1});
        }
    }

    for (i = 0; i < 5; ++i){
        cout << deck.at(i).rank << "-" << deck.at(i).suit << endl;
    }

    shuffle(__LINE__, deck);
    
    for (i = 0; i < 5; ++i){
        cout << deck.at(i).rank << "-" << deck.at(i).suit << endl;
    }

    return 0;
}