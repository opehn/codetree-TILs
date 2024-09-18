#include <iostream>
using namespace std;

int getDayPassed(int month, int day){
    int numOfdays[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayPassed = 0;

    for(int i = 1; i < month; i++){
        dayPassed += numOfdays[i]; 
    }
    dayPassed += day;
    return dayPassed;
}

int main() {
    int m1, d1, m2, d2;
    string day;
    cin >> m1 >> d1 >> m2 >> d2 >> day;

    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int dayIdx = 0;

    for(int i = 0; i < 7; i++){
        if(days[i] == day){
            dayIdx = i;
            break;
        }
    }

    int difference = getDayPassed(m2, d2) - getDayPassed(m1, d1);
    cout << (difference % 7 < dayIdx ? difference / 7 : difference / 7 + 1);

    return 0;
}