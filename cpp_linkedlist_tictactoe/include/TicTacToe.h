#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

void placeMark(int &player, int &player1, int &player2, int cell1, int cell2);
void checkwin(int &playerToCheck, int &player1, int &player2);
void printBoard(int player1, int player2);
void playTicTacToe();

#endif
