#include "LinkedList.h"
#include "TicTacToe.h"

#include <iostream>

int main() {
    std::cout << "=== Linked List Demo ===\n";
    LinkedList list;

    list.pushFront(30);
    list.pushFront(20);
    list.pushFront(10);

    std::cout << "After adding 30, 20, then 10 to the front:\n";
    list.print();

    std::cout << "After reversing:\n";
    list.reverse();
    list.print();

    std::cout << "After removing 20:\n";
    list.remove(20);
    list.print();

    std::cout << "\n=== Tic-Tac-Toe ===\n";
    playTicTacToe();

    return 0;
}
