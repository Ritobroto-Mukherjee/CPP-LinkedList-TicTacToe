#include "LinkedList.h"

#include <iostream>

LinkedList::Node::Node(int value) : data(value), next(nullptr) {}

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void LinkedList::pushFront(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void LinkedList::remove(int value) {
    if (head == nullptr) {
        return;
    }

    if (head->data == value) {
        Node* nodeToDelete = head;
        head = head->next;
        delete nodeToDelete;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node* nodeToDelete = current->next;
        current->next = current->next->next;
        delete nodeToDelete;
    }
}

void LinkedList::reverse() {
    Node* previous = nullptr;
    Node* current = head;

    while (current != nullptr) {
        Node* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    head = previous;
}

void LinkedList::print() const {
    const Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr\n";
}
