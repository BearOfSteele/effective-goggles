#include <iostream>
//#include "functions.cpp"
using namespace std;

// Print the amount of money each player has.
void printMoney (int playerMoney, int ai1Money, int ai2Money, int ai3Money, int pot) {
    if (playerMoney) {
        cout << "Your money: " << playerMoney << endl;
    }
    if (ai1Money) {
        cout << "ai1 money: " << ai1Money << endl;
    }
    if (ai2Money) {
        cout << "ai1 money: " << ai2Money << endl;
    }
    if (ai3Money) {
        cout << "ai1 money: " << ai3Money << endl;
    }
    if (ai1Money) {
        cout << "pot money: " << pot << endl;
    }
}