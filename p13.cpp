#include <iostream>
using namespace std;
int main() {
    string a,b,c;
    cout<< "Enter the command ";
    cin>>a;
    if (a=="g") {
        cout<<"Go!";
    }else if (a=="y") {
        cout<<"Get Ready!";
    }else if (a=="r") {
        cout<<"Stop";
    }else {
        cout<<"wrong command";
    }

}