#include <iostream>
#include <string>

using namespace std;

int getUserChoice();
int getRandomChoice();
void result(int a, int b);

int main() {
   
    int a = getUserChoice();

    int b = getRandomChoice();

    result(a, b);

    return 0;
}

int getUserChoice() {

    cout << "----- IT'S ROCK PAPER SCISSORS GAME -----\n";
    cout << "*****************************************\n" << endl;

    int x;
    string k;
    do {
        cout << "\nPick: Rock Paper Scissors" << endl;
        cin >> k;
    } while (k != "Rock" && k != "Paper" && k != "Scissors");

    if (k == "Rock") {
        x = 1;
    }
    else if (k == "Paper") {
        x = 2;
    }
    else if (k == "Scissors") {
        x = 3;
    }

    return x;
}

int getRandomChoice() {

    srand(time(NULL));
    int r = 1 + rand() % 3;

    switch (r) {
    case 1:
        cout << "\nRock" << endl;
        break;
    case 2:
        cout << "\nPaper" << endl;
        break;
    case 3:
        cout << "\nScissors" << endl;
        break;
    }

    return r;
}

void result(int a, int b) {

    if (a == b) {
        cout << "\nDraw.\n";
    }
    else if (a == 1 && b == 2) {
        cout << "\nYou lost.\n";
    }
    else if (a == 3 && b == 1) {
        cout << "\nYou lost.\n";
    }
    else if (a == 2 && b == 3) {
        cout << "\nYou lost.\n";
    }
    else {
        cout << "\nYou won. Congratulations!\n";
    }
}