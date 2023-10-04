#include<iostream>
using namespace std;


class Cricketer 
{
public:
    string name;

    void inputName() {
        cout << "ENTER THE CRICKETER NAME: ";
        cin >> name;
    }
};


class Batsman : public Cricketer 
{
    int totalRuns, matchesPlayed;
    float bestPerformance;

public:
  
    void inputData() {
        cout << "ENTER SEORE BOARD: ";
        cin >> totalRuns;
        cout << "ENTER TOTAL MATCHES: ";
        cin >> matchesPlayed;
        cout << "ENTER BEST SEORE PERFORANME IN MATCHS ";
        cin >> bestPerformance;
    }

   
    float calculateAverageRuns() {
        return (float)totalRuns / matchesPlayed;
    }

    void displayData() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << calculateAverageRuns() << endl;
    }
};

int main() {
    
    Batsman batsman;

    batsman.inputName();
    batsman.inputData();
    batsman.displayData();

    return 0;
}