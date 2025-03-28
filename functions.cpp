#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

// card structure
struct card {
  int rank;
  int suit;
};

// Generate random number.
int randomNumber (int line, int range, int change) {
    // Seed generator.
    srand(time(0));
    return (abs(rand() + line) % range) + change;
}

// Shuffle deck.
void shuffle (int line, vector<card> deck) {
  auto rng = default_random_engine {randomNumber(line, 5, 1)};
  shuffle(begin(deck), end(deck), rng);
}

// Detects if input is valid integer
int testInt (int min, int max) {
    bool validInput = false;
    int tempInt;

    while (validInput == false) {
        cin >> tempInt;
        if (cin.fail() || tempInt < min || tempInt > max) {
        cout << "Invalid input. Please try again.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
        else {
        validInput = true;
        }
    }
    return tempInt;
}

// Detects if input is valid 'y' or 'n'
int testChar () {
    bool validInput = false;
    char tempChar;

    while (validInput == false) {
      cin >> tempChar;
      if (cin.fail() || (tempChar != 'y' && tempChar != 'n')) {
        cout << "Invalid input. Please try again.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
      }
      else {
        validInput = true;
      }
    }
    return tempChar;
  }

  