#include <iostream>
using namespace std;

class Secret{
private:
    int time;
    string location;
    string code;

public:
    Secret(string code, string location, int time): code(code), location(location), time(time) {};

    string getCode() const{
        return this->code;
    }

    string getLocation() const{
        return this->location;
    }

    int getTime() const{
        return this->time;
    }
};


int main() {
    int time;
    string code, location;
    cin >> code >> location >> time;

    Secret secret(code, location, time);

    cout 
    << "secret code : " << secret.getCode() << endl
    << "meeting point : " << secret.getLocation() << endl
    << "time : " << secret.getTime();
    return 0;
}