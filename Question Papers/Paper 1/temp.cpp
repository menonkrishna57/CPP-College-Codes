#include <iostream>
#include <string>

class CricketPlayer {
private:
    int playerNumber;
    string name;
    double battingAverage;

public:
    void input() {
        cout << "Enter player number: ";
        cin >> playerNumber;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter batting average: ";
        cin >> battingAverage;
    }

    void display() {
        cout << "Player Number: " << playerNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Batting Average: " << battingAverage << endl;
    }
};

int main() {
    CricketPlayer player;
    player.input();
    player.display();

    return 0;
}

