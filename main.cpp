#include <iostream>
#include <vector>
#include <algorithm>
#include "functions.cpp"
#include "phases.cpp"
using namespace std;



int main() {
    vector<card> deck;
    card playerCards[2];
    card ai1Cards[2];
    card ai2Cards[2];
    card ai3Cards[2];
    card river[5];
    int playerMoney = 20;
    int ai1Money = 20;
    int ai2Money = 20;
    int ai3Money = 20;
    int pot = 0;
    int i;
    int j;

    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 13; ++j) {
            deck.push_back({j + 1, i + 1});
        }
    }

    for (i = 0; i < 52; ++i){
        cout << deck.at(i).rank << "-" << deck.at(i).suit << endl;
    }
    cout << endl;

    shuffle(deck);
    
    for (i = 0; i < 52; ++i){
        cout << deck.at(i).rank << "-" << deck.at(i).suit << endl;
    }
    cout << endl;

    printMoney (playerMoney, ai1Money, ai2Money, ai3Money, pot);

    return 0;
}