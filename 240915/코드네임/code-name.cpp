#include <iostream>
using namespace std;

#define AGENT_NUM 5
class Agent {
public:
    string codeName;
    int score;

    Agent(string codeName = "", int score = 0): codeName(codeName), score(score) {};
};

int main() {
    Agent agents[AGENT_NUM];

    string codeName;
    int score;
    for(int i = 0; i < AGENT_NUM; i++){
        cin >> codeName >> score;
        agents[i] = Agent(codeName, score);
    }

    int minIndex = 0;
    for(int i = 1; i < AGENT_NUM; i++){
        if(agents[i].score < agents[minIndex].score){
            minIndex = i;
        }
    }

    cout << agents[minIndex].codeName << " " << agents[minIndex].score << endl;
    return 0;
}