#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Seed random number generator
    int randomNum = rand() % 90 + 10; // Generate a random 2-digit number (10–99)

    int guess;
    cout << "Guess the 2-digit number: ";
    cin >> guess;

    if (guess < 10 || guess > 99) {
        cout << "Invalid input! Please enter a two-digit number." << endl;
        return 0;
    }

    // Extract digits
    int randomTens = randomNum / 10;
    int randomOnes = randomNum % 10;

    int guessTens = guess / 10;
    int guessOnes = guess % 10;

    int accuracy = 0;

    if (guess == randomNum) {
        accuracy = 100;
    } else if ((guessTens == randomTens) || (guessOnes == randomOnes)) {
        accuracy = 50;
    } else {
        accuracy = 0;
    }

    cout << "Random number was: " << randomNum << endl;
    cout << "Your guess: " << guess << endl;
    cout << "Accuracy: " << accuracy << "%" << endl;

    return 0;
}
