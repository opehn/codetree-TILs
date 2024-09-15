#include <iostream>
using namespace std;

class Weather {
    public:
        string date;
        string day;
        string weather;
    
    Weather(string date = "", string day = "", string weather = ""): date(date), day(day), weather(weather){}; 
};

int main() {
    int n;
    cin >> n;

    Weather weathers[n];

    string date, day, weather;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> date >> day >> weather;

        if(weather == "Rain") {
            weathers[cnt++] = Weather(date, day, weather);
        }
    }

    int minIndex = 0;
    for(int i = 1; i < cnt; i++){
        if(weathers[i].date < weathers[minIndex].date)
            minIndex = i;
    }

    cout << weathers[minIndex].date << " " << weathers[minIndex].day << " " 
    << weathers[minIndex].weather << endl;
    return 0;
}