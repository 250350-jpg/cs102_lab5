#include <iostream>
using namespace std;

int main() {
    double w;
    cout << "Enter weight of package (kg): ";
    cin >> w;

    if (w <= 0) {
        cout << "Invalid input.";
    } 
    else if (w <= 1) {
        cout << 3500;
    } 
    else if (w <= 3) {
        cout << 5500;
    } 
    else if (w <= 10) {
        cout << 8500;
    } 
    else if (w <= 20) {
        cout << 10500;
    } 
    else {
        cout << "The package cannot be shipped.";
    }

    return 0;
}
