#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter language code (u/e/r/g): ";
    cin >> ch;

    switch(ch) {
        case 'u': cout << "Salom"; break;
        case 'e': cout << "Hello"; break;
        case 'r': cout << "Privet"; break;
        case 'g': cout << "Hallo"; break;
        default: cout << "I do not know this language:("; 
    }
    return 0;
}
