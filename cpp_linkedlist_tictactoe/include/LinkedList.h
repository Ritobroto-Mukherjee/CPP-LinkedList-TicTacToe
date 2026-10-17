#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class LinkedList {
private:
    struct Node {
        int data;
        Node* next;
        explicit Node(int value);
    };

    Node* head;

public:
    LinkedList();
    ~LinkedList();

    LinkedList(const LinkedList&) = delete;
    LinkedList& operator=(const LinkedList&) = delete;

    void pushFront(int value);
    void remove(int value);
    void reverse();
    void print() const;
};

#endif
