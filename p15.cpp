#include <iostream>
using namespace std;

string weekdays(int day){
    switch (day) {
        case 1:
            return "Monday";
            break;
        case 2:
            return "Tuesday";
            break;
        case 3:
            return "Wednesday";
            break;
        case 4:
            return "Thursday";
            break;
        case 5:
            return "Friday";
            break;
        case 6:
            return "Saturday";
            break;
        case 7:
            return "Sunday";
            break;
        default:
            return "Invalid number";
    }
}


int main() {
    int x,y;
    string today, fday;
    cout<< "Enter the today's day: ";
    cin>>x;
    cout<<"Enter the nuber of days elapsed since today: ";
    cin>>y;
    cout << "Todays is "<< weekdays(x)<<" and the future day is "<< weekdays(x+y)<<endl;
    return 0;
}

