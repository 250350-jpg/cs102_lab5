#include <iostream>
using namespace std;

int main() {
    int x, l;
    cout<< "Enter the number: ";
    cin>>x;
    l  = ((x>0)?1:((x==0)?0:-1));
    switch (l) {
        case -1:
            cout<<"Negative";
            break;
        case 1:
            cout<< "Positive";
            break;
        case 0:
            cout<<"Zero";
            break;
    }





}
