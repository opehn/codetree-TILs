#include <iostream>
using namespace std;

int getDayPassed(int month, int day)  {
    int numOfDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayPassed = 0;

    for(int i = 1;i <= month; i++){
        dayPassed += numOfDays[i];
    }
    dayPassed += day;

    return dayPassed;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int dayPassed1 = getDayPassed(m1, d1) + 1;
    int dayPassed2 = getDayPassed(m2, d2);


    cout << dayPassed2 - dayPassed1 + 1 << endl;
    return 0;
}