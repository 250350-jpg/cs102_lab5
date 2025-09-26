#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed random generator
    string choice;

    cout << "Welcome to the Odd or Even game!" << endl;
    cout << "Type 'end' anytime to quit." << endl;

    while (true) {
        cout << "\nEnter your choice (odd/even): ";
        cin >> choice;

        if (choice == "end") {
            cout << "Game ended. Thanks for playing!" << endl;
            break;
        }

        if (choice != "odd" && choice != "even") {
            cout << "Invalid choice! Please type 'odd', 'even', or 'end'." << endl;
            continue; // restart loop
        }

        int number = rand() % 100; // Random number 0–99
        bool isEven = (number % 2 == 0);

        cout << "Computer picked number: " << number << endl;

        if ((choice == "even" && isEven) || (choice == "odd" && !isEven)) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
    }

    return 0;
}
