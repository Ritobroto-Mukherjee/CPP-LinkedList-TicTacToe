#include "TicTacToe.h"

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void placeMark(int &player, int &player1, int &player2, int cell1, int cell2) {
    player1 |= (1 << cell1);
    player2 |= (1 << cell2);
    player = (player1 | player2);
    checkwin(player1, player1, player2);
    checkwin(player2, player1, player2);
}

void checkwin(int &playerToCheck, int &player1, int &player2) {
    int winningMasks[8] = {7, 56, 448, 73, 146, 292, 273, 84};
    for (int mask : winningMasks) {
        if ((playerToCheck & mask) == mask) {
            printBoard(player1, player2);
            cout << "We have a winner!\n";
            exit(0);
        }
    }
}

void printBoard(int player1, int player2) {
    cout << "\nBOARD\n";
    for (int i = 0; i <= 8; i++) {
        if (player1 & (1 << i)) {
            cout << "X ";
        } else if (player2 & (1 << i)) {
            cout << "O ";
        } else {
            cout << "- ";
        }
        if ((i + 1) % 3 == 0) {
            cout << "\n";
        }
    }
    cout << "\n";
}

void playTicTacToe() {
    string player1Name;
    string player2Name;
    int player{0};
    int player1{0}, player2{0};
    int cell1{0}, cell2{0};
    cout << "Enter name of player 1: ";
    cin >> player1Name;
    cout << "Enter name of player 2: ";
    cin >> player2Name;
    for (int i = 1; i <= 9; i++) {
        cout << player1Name << " -> Enter your move position (0-8): ";
        cin >> cell1;
        cout << player2Name << " -> Enter your move position (0-8): ";
        cin >> cell2;
        placeMark(player, player1, player2, cell1, cell2);
    }
}
