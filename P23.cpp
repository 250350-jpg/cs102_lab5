#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed random generator

    // Ranks and Suits
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10",
                      "Jack", "Queen", "King"};
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    // Pick a random card
    int randomCard = rand() % 52;  // 0–51
    int rankIndex = randomCard % 13; // 0–12 → maps to ranks
    int suitIndex = randomCard / 13; // 0–3  → maps to suits

    cout << "You picked the " << ranks[rankIndex]
         << " of " << suits[suitIndex] << "!" << endl;

    return 0;
}
