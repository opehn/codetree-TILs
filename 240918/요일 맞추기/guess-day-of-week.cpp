#include <iostream>
using namespace std;

int getDayPassed(int month, int day){
    int numOfdays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayPassed = 0;

    for(int i = 1; i < month; i++){
        dayPassed += numOfdays[i]; 
    }
    dayPassed += day;
    return dayPassed;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    
    int dayPassed1 = getDayPassed(m1, d1);
    int dayPassed2 = getDayPassed(m2, d2);
    int difference = dayPassed2 - dayPassed1;


    int mod = 0;
    if (difference < 0){
        difference *= -1;
        difference = difference % 7;
        mod = 7 - difference;
    } else {
        mod = difference % 7;
    }
    cout << days[mod];
    
    return 0;
}