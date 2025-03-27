#include <iostream>
#include <string>
#include <cstring>
#include "functions.cpp"
using namespace std;

struct cards {
    int rank;
    int suit;
};

int main() {
    cards inPlay[9];
    bool cont = false;
    int i;
    int j = 1000000000;

    inPlay[0].rank = randomNumber(__LINE__, 13, 1);
    inPlay[0].suit = randomNumber(__LINE__, 4, 1);
    for (i = 1; i < 9; ++i) {
        j += 1000000000;
        while (cont == false) {
            inPlay[i].rank = randomNumber(__LINE__ + j, 13, 1);
            inPlay[i].suit = randomNumber(__LINE__ + j, 4, 1);

            if (inPlay[i - 1].rank != inPlay[i].rank) {
                cont = true;
            }

            else {
                j += 1000000000;
            }
        }
        cont = false;
    }

    for (i = 0; i < 9; ++i){
        cout << inPlay[i].rank << "-" << inPlay[i].suit << endl;
    }

    return 0;
}